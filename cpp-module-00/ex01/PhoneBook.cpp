/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:40:35 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/16 19:43:55 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Welcome to PhoneBook" << std::endl;
	this->_index = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "See you soon !" << std::endl;
	return ;
}

void	PhoneBook::add_contact()
{
	int	i;

	i = this->_index;
	std::string input;

	if (i > 7)
		std::cout << this->_contact[i % 8].getFirst_name() << " will be overwrite" << std::endl;
	std::cout << "First name : ";
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return ;
	}
	this->_contact[i % 8].setFirst_name(input);
	
	std::cout << "Last name : ";
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return ;
	}
	this->_contact[i % 8].setLast_name(input);

	std::cout << "Nickname : ";
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return ;
	}
	this->_contact[i % 8].setNickname(input);

	std::cout << "Phone Number : ";
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return ;
	}
	this->_contact[i % 8].setPhone_number(input);

	std::cout << "Darkest secret : ";
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return ;
	}
	this->_contact[i % 8].setDarkest_secret(input);

	this->_index++;
}

std::string print_format(const std::string& str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
    else
        return (std::string(10 - str.length(), ' ') + str);
}

static void	print_contact(Contact& contact)
{
	std::cout << "First name     : " << contact.getFirst_name() << std::endl;
	std::cout << "Last name      : " << contact.getLast_name() << std::endl;
	std::cout << "Nickname       : " << contact.getNickname() << std::endl;
	std::cout << "Phone number   : " << contact.getPhone_number() << std::endl;
	std::cout << "Darkest secret : " << contact.getDarkest_secret() << std::endl;
}

void	PhoneBook::search_contact()
{
	int	i;
	std::string	input;

	i = 0;
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	while (i < 8)
	{
		std::cout << "|         " << i + 1
				  << "|" << print_format(this->_contact[i].getFirst_name())
				  << "|" << print_format(this->_contact[i].getLast_name())
				  << "|" << print_format(this->_contact[i].getNickname())
				  << "|" << std::endl;
		i++;
	}
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	while (1)
	{
		std::cout << "Index : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (input.length() == 1 && input[0] >= '1' && input[0] <= '8')
		{
			print_contact(this->_contact[i - 1]);
			break ;
		}
		else
			std::cout << "Please enter an index valid [1-8]" << std::endl;
	}
}