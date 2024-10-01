/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:30:04 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/01 15:38:41 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Random ClapTrap"){
	this->_hit_point = 10;
	this->_energy_point = 10;
	this->_attack_damage = 0;
	std::cout << "Constructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name){
	this->_hit_point = 10;
	this->_energy_point = 10;
	this->_attack_damage = 0;
	std::cout << "Constructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	*this = c;
	std::cout << "Copy constructor called for " << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_point = other._hit_point;
		this->_energy_point = other._energy_point;
		this->_attack_damage = other._attack_damage;
	}
	return (*this);
}

void ClapTrap::attack(std::string& target){
	if (!this->_hit_point)
		std::cout << this->_name << " does not have enough hit point to attack" << std::endl;
	else if (!this->_energy_point)
		std::cout << this->_name << " does not have enough energy point to attack" << std::endl;
	else
	{
		std::cout << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " point of damage" << std::endl;
		this->_energy_point--;
	}
}
void ClapTrap::takeDamage(unsigned int amount){
	if (!this->_hit_point)
		std::cout << this->_name << " does not have enough hit point to take damage" << std::endl;
	else
	{
		std::cout << this->_name << " took " << amount << " it goes from " << this->_hit_point << " to ";
		this->_hit_point -= amount;
		if (this->_hit_point < 0)
			this->_hit_point = 0;
		std::cout << this->_hit_point << std::endl;
		this->_energy_point--;
	}
}
void ClapTrap::beRepaired(unsigned int amount){
	if (!this->_hit_point)
		std::cout << this->_name << " does not have enough hit point to be repaired" << std::endl;
	else if (!this->_energy_point)
		std::cout << this->_name << " does not have enough energy point to be repaired" << std::endl;
	else
	{
		std::cout << this->_name << " is repaired " << amount << " it goes from " << this->_hit_point << " to ";
		this->_hit_point += amount;
		std::cout << this->_hit_point << std::endl;
		this->_energy_point--;
	}

}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called for " << this->_name << std::endl;
}
