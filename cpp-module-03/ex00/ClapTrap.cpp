/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:30:04 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/09 13:10:24 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Random ClapTrap"){
	this->_hitPoint = 10;
	this->_energyPoint = 10;
	this->_attackDamage = 0;
	std::cout << "Constructor called for " << "ClapTrap" << this->_name << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name){
	this->_hitPoint = 10;
	this->_energyPoint = 10;
	this->_attackDamage = 0;
	std::cout << "Constructor called for " << "ClapTrap " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	*this = c;
	std::cout << "Copy constructor called for " << "ClapTrap " << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoint = other._hitPoint;
		this->_energyPoint = other._energyPoint;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(std::string& target){
	if (!this->_hitPoint)
		std::cout << "ClapTrap " << this->_name << " does not have enough hit point to attack" << std::endl;
	else if (!this->_energyPoint)
		std::cout << "ClapTrap " << this->_name << " does not have enough energy point to attack" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " point of damage" << std::endl;
		this->_energyPoint--;
	}
}
void ClapTrap::takeDamage(unsigned int amount){
	if (!this->_hitPoint)
		std::cout << "ClapTrap " << this->_name << " does not have enough hit point to take damage" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount << " it goes from " << this->_hitPoint << " to ";
		this->_hitPoint -= amount;
		if (this->_hitPoint < 0)
			this->_hitPoint = 0;
		std::cout << this->_hitPoint << std::endl;
		this->_energyPoint--;
	}
}
void ClapTrap::beRepaired(unsigned int amount){
	if (!this->_hitPoint)
		std::cout << "ClapTrap " << this->_name << " does not have enough hit point to be repaired" << std::endl;
	else if (!this->_energyPoint)
		std::cout << "ClapTrap " << this->_name << " does not have enough energy point to be repaired" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " is repaired " << amount << " it goes from " << this->_hitPoint << " to ";
		this->_hitPoint += amount;
		std::cout << this->_hitPoint << std::endl;
		this->_energyPoint--;
	}

}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called for " << "ClapTrap " << this->_name << std::endl;
}
