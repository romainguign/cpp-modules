/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:48:16 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/24 12:26:58 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB(std::string	name, Weapon *weapon) : _name(name),  _weapon(weapon)
// {
// 	std::cout << "Human B named " << name << "has been created" << std::endl;
// }

HumanB::HumanB(std::string	name)
{
	this->_name = name;
	this->_weapon = NULL;
	std::cout << "Human B named " << name << "has been created" << std::endl;
}


HumanB::~HumanB()
{
	std::cout << "Human B named " << this->_name << "has been deleted" << std::endl;
}

void	HumanB::attack()
{
	if (this->_weapon != NULL)
		std::cout << this->_name << "  attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " unarmed attack" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}