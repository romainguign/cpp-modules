/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:45:40 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/19 16:53:02 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::cout << "BitcoinExchange default constructor called" << std::endl;
	saveData();
}

void BitcoinExchange::saveData()
{
	std::ifstream file(DATA_FILE);
	std::string line;
	std::string date;
	double value;
	
	if (!file.is_open())
		throw std::runtime_error("Could not open file");
	while (std::getline(file, line))
	{
		date = line.substr(0, line.find(','));
		value = std::strtod((line.substr(line.find(',') + 1)).c_str(), NULL);
		_data[date] = value;
	}
}

static bool isLeapYear(int year) {
	return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

static bool isValidDate(int year, int month, int day) {
	if (year < 1 || month < 1 || month > 12 || day < 1) {
		return false;
	}
	int daysInMonth[] = { 31, isLeapYear(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	return day <= daysInMonth[month - 1];
}

static bool checkDate(const std::string& dateStr) {
	int year, month, day;
	char delimiter1, delimiter2;
	std::istringstream dateStream(dateStr);

	if (dateStream >> year >> delimiter1 >> month >> delimiter2 >> day) {
		if (delimiter1 == '-' && delimiter2 == '-') {
			return isValidDate(year, month, day);
		}
	}
	return false;
}

static void parseDate(std::string &date)
{
	if (date.empty())
		throw std::runtime_error("empty date");
	if (date.size() != 10)
		throw std::runtime_error("invalid date format");
	if (date[4] != '-' || date[7] != '-')
		throw std::runtime_error("invalid date format");
	if (!checkDate(date))
		throw std::runtime_error("invalid date");
}

static void parseLine(std::string line, std::string &date, double &value)
{
	std::string valueStr;
	if (line.empty())
		throw std::runtime_error("empty line");
	if (line.find(" | ") == std::string::npos)
		throw std::runtime_error("invalid separator");
	date = line.substr(0, line.find(" | "));
	parseDate(date);
	if (line.find(" | ") + 3 >= line.size())
		throw std::runtime_error("no value");
	if ((line.substr(line.find(" | ") + 3)).find_first_not_of("0123456789.") != std::string::npos)
		throw std::runtime_error("invalid value");
	value = std::strtod((line.substr(line.find(" | ") + 3)).c_str(), NULL);
	if (value < 0)
		throw std::runtime_error("not a positive number");
	if (value > 1000)
		throw std::runtime_error("too large number");
}

void BitcoinExchange::displayExchangeRate(std::string &date, double value) const
{
	double rate;

	rate = 0;
	if (_data.find(date) != _data.end())
		rate = value * _data.at(date);
	if (!rate)
	{
		for (std::map<std::string, double>::const_iterator it = _data.begin(); it != _data.end(); ++it)
		{
			if (it->first > date)
			{
				if (it == _data.begin())
				{
					rate = value * it->second;
					break;
				}
				it--;
				rate = value * it->second;
				break;
			}
		}
	}
	std::cout << date << " => " << value << " = " << rate << std::endl;
}

void BitcoinExchange::convertExchanges(char *filename)
{
	std::ifstream file(filename);
	std::string line;

	if (!file.is_open())
		throw std::runtime_error("Could not open file");
	
	std::string date;
	double value;
	
	std::getline(file, line);
	if (line != "date | value")
		throw std::runtime_error("invalid header");
	while (std::getline(file, line))
	{
		try {
			parseLine(line, date, value);
			this->displayExchangeRate(date, value);
		}
		catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "BitcoinExchange destructor called" << std::endl;
}