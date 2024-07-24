/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:30:18 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/24 09:55:28 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string	name, Weapon &weapon) : _weapon(weapon), _name(name)
{
	std::cout << "Human A named " << name << "has been created" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Human A named " << this->_name << "has been deleted" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << "  attacks with their " << this->_weapon.getType() << std::endl;
}