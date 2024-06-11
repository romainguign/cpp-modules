/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:40:35 by roguigna          #+#    #+#             */
/*   Updated: 2024/06/11 20:48:24 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;

	for (int i = 0; i < 8 ; i++)
		this->contact[i] = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	PhoneBook::add_contact(std::str new_contact)
{
	
}