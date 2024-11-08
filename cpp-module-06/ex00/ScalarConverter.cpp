/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:46:39 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/08 18:15:01 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	*this = src;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const &src)
{
	(void)src;
	return *this;
}

static void printChar(int value)
{
	if (value < 0 || value > 127)
	{
		std::cout << "char: impossible" << std::endl;
		return;
	}
	char c = static_cast<char>(value);
	if (c < 32 || c > 126) 
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
}

static void printFloat(float value)
{
	if (std::isnan(value) || std::isinf(value))
		std::cout << "float: " << value << "f" << std::endl;
	else
		std::cout << "float: " << value << ".0f" << std::endl;
}

static void printDouble(double value) {
	if (std::isnan(value) || std::isinf(value))
		std::cout << "double: " << value << std::endl;
	else
		std::cout << "double: " << value << (value == static_cast<int>(value) ? ".0" : "") << std::endl;
}

static bool isTypeChar(std::string const &str)
{
	if (str.length() == 1 && !isdigit(str[0]))
		return true;
	return false;
}

static bool isTypeInt(std::string const &str)
{
	char *end;
	long int value = std::strtol(str.c_str(), &end, 10);
	if (value < -2147483648 || value > 2147483647)
		return false;
	if (*end == '\0')
		return true;
	return false;
}

static bool isTypeFloat(std::string const &str)
{
	char *end;
	float value = std::strtof(str.c_str(), &end);
	if (value < -std::numeric_limits<float>::max() || value > std::numeric_limits<float>::max())
		return false;
	if (*end == 'f' && end[1] == '\0')
		return true;
	return false;
}

static bool isTypeDouble(std::string const &str)
{
	char *end;
	double value = std::strtod(str.c_str(), &end);
	if (value < -std::numeric_limits<double>::max() || value > std::numeric_limits<double>::max())
		return false;
	if (*end == '\0')
		return true;
	return false;
}

void ScalarConverter::convert(std::string const &str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf") {
        float value = std::strtof(str.c_str(), NULL);
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        printFloat(value);
        printDouble(static_cast<double>(value));
        return;
    }

    if (str == "-inf" || str == "+inf" || str == "nan") {
        double value = std::strtod(str.c_str(), NULL);
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        printFloat(static_cast<float>(value));
        printDouble(value);
		return;
    }
	
	if (isTypeInt(str))
	{
		long longValue = std::strtol(str.c_str(), NULL, 10);
		int value = static_cast<int>(longValue);
		printChar(value);
		std::cout << "int: " << value << std::endl;
		printFloat(value);
		printDouble(value);
	}
	else if (isTypeFloat(str))
	{
		float floatValue = std::strtof(str.c_str(), NULL);
		printChar(static_cast<int>(floatValue));
		std::cout << "int: " << static_cast<int>(floatValue) << std::endl;
		printFloat(floatValue);
		printDouble(static_cast<double>(floatValue));
	}
	else if (isTypeDouble(str))
	{
		double doubleValue = std::strtod(str.c_str(), NULL);
		printChar(static_cast<int>(doubleValue));
		std::cout << "int: " << static_cast<int>(doubleValue) << std::endl;
		printFloat(static_cast<float>(doubleValue));
		printDouble(doubleValue);
	}
	else if (isTypeChar(str))
	{
		char c = str[0];
		printChar(c);
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		printFloat(c);
		printDouble(c);
	}
	else
		std::cout << "The type conversion is impossible." << std::endl;
}

ScalarConverter::~ScalarConverter()
{
}