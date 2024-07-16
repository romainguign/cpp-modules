/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:47:35 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/16 18:44:33 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#include <iostream>
#include <string>

int	main(void)
{
	std::string	input;
	PhoneBook	phonebook;
	
	while (1)
	{
		std::cout << "PhoneBook : ";
		std::getline(std::cin, input);
		if (input == "EXIT" || std::cin.eof())
			break ;
		else if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else
			std::cout << "Please type : [ ADD ], [ SEARCH ] or [ EXIT ]." << std::endl;
	}
	return (0);
}