/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:44:26 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/16 17:07:29 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::setFirst_name(std::string s)
{
	this->_first_name = s;
}
void	Contact::setLast_name(std::string s)
{
	this->_last_name = s;
}
void	Contact::setNickname(std::string s)
{
	this->_nickname = s;
}
void	Contact::setPhone_number(std::string s)
{
	this->_phone_number = s;
}
void	Contact::setDarkest_secret(std::string s)
{
	this->_darkest_secret = s;
}
std::string	Contact::getFirst_name()
{
	return (this->_first_name);
}
std::string	Contact::getLast_name()
{
	return (this->_last_name);
}
std::string	Contact::getNickname()
{
	return (this->_nickname);
}
std::string	Contact::getPhone_number()
{
	return (this->_phone_number);
}
std::string	Contact::getDarkest_secret()
{
	return (this->_darkest_secret);
}