/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:29:57 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/18 14:47:11 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string	type) : _type(type)
{
	std::cout << "A weapon has been created." << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "A weapon has been deleted." << std::endl;
}

const std::string	&Weapon::getType(){
	return (this->_type);
}
void		Weapon::setType(std::string type)
{
	this->_type = type;
}