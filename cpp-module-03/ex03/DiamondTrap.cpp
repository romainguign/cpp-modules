/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:46:13 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/09 13:18:41 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("RandomDiamondTrap_clap_trap") {
    this->_name = "RandomDiamondTrap";
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = FragTrap::_attackDamage;
	ClapTrap::_name = _name + "_clap_trap";
	std::cout << "DiamondTrap : Constructor called for " << this->_name << std::endl;
};

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap"){
	this->_name = name;
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = FragTrap::_attackDamage;
	ClapTrap::_name = _name + "_clap_trap";
	std::cout << "DiamondTrap : Constructor called for " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &c)
{
	*this = c;
	std::cout << "DiamondTrap : Copy constructor called for " << this->_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other){
	std::cout << "DiamondTrap : Copy assignment operator called " << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoint = other._hitPoint;
		this->_energyPoint = other._energyPoint;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

void DiamondTrap::attack(std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
	// std::cout << "hit point : " << _hitPoint << std::endl;
	// std::cout << "energy    : " << _energyPoint << std::endl;
	// std::cout << "attack    : " << _attackDamage << std::endl;

	if (!this->_hitPoint)
		std::cout << this->_name << " does not have enough hit point to say names" << std::endl;
	else if (!this->_energyPoint)
		std::cout << this->_name << " does not have enough energy point to say names" << std::endl;
    else
	{
		std::cout << "My name is " << _name << " and ClapTrap's name is " << ClapTrap::_name << std::endl;
		this->_energyPoint--;
	}
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap : Destructor called for " << this->_name << std::endl;
}
