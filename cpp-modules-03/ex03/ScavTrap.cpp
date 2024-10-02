/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:46:13 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/02 15:14:02 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    this->_name = "Random ScavTrap";
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap : Constructor called for " << this->_name << std::endl;
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap : Constructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &c)
{
	*this = c;
	std::cout << "ScavTrap : Copy constructor called for " << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other){
	std::cout << "ScavTrap : Copy assignment operator called " << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoint = other._hitPoint;
		this->_energyPoint = other._energyPoint;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

void    ScavTrap::guardGate()
{
    if (!this->_hitPoint)
		std::cout << this->_name << " does not have enough hit point to guard gate" << std::endl;
	else if (!this->_energyPoint)
		std::cout << this->_name << " does not have enough energy point to guard gate" << std::endl;
    else
	{
        std::cout << this->_name << " is now in Gate Keeper mode" << std::endl;
		this->_energyPoint--;
	}
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap : Destructor called for " << this->_name << std::endl;
}
