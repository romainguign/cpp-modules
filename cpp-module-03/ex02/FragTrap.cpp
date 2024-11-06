/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:46:13 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/02 15:14:02 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    this->_name = "Random FragTrap";
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap : Constructor called for " << this->_name << std::endl;
};

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap : Constructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap &c)
{
	*this = c;
	std::cout << "FragTrap : Copy constructor called for " << this->_name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other){
	std::cout << "FragTrap : Copy assignment operator called " << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoint = other._hitPoint;
		this->_energyPoint = other._energyPoint;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

void    FragTrap::highFivesGuys()
{
    if (!this->_hitPoint)
		std::cout << this->_name << " does not have enough hit pointto request High Fives" << std::endl;
	else if (!this->_energyPoint)
		std::cout << this->_name << " does not have enough energy pointto request High Fives" << std::endl;
    else
	{
        std::cout << this->_name << " : Hi do you want to high five !" << std::endl;
		this->_energyPoint--;
	}
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap : Destructor called for " << this->_name << std::endl;
}
