/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:45:40 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/14 18:33:49 by roguigna         ###   ########.fr       */
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

void BitcoinExchange::loadFile(char *filename)
{
	std::ifstream file(filename);
	std::string line;

	if (!file.is_open())
		throw std::runtime_error("Could not open file");
	
	while (std::getline(file, line))
	{
		std::istringstream iss(line);
		std::string date;
		float value;

		if (!(iss >> date >> value))
			throw std::runtime_error("Invalid file format");
		if (value < 0 || value > 1000)
			throw std::runtime_error("Invalid value");
		_input[date] = value;
	}
}

void BitcoinExchange::display()
{
	// for (auto &it : _data)
	// 	std::cout << it.first << " " << it.second << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "BitcoinExchange destructor called" << std::endl;
}