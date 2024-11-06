/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:50:54 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/08 17:38:22 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default"){
	std::cout << this->_name << ": Constructor called" << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name){
	std::cout << this->_name << ": Constructor called" << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &c){
	*this = c;
}

Character &Character::operator=(const Character &c){
	if (this != &c)
	{
		this->_name = c._name;
		for (int i = 0; i < MAX_MATERIA; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = NULL;
			if (c._inventory[i])
				this->_inventory[i] = c._inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const &Character::getName() const{
	return (this->_name);
}

void Character::equip(AMateria* m){
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << this->_name << ": Inventory is full" << std::endl;
}

void Character::unequip(int idx){
	if (idx < 0 || idx >= MAX_MATERIA || !this->_inventory[idx])
	{
		std::cout << this->_name << ": Invalid index" << std::endl;
		return ;
	}
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx >= MAX_MATERIA || !this->_inventory[idx])
	{
		std::cout << this->_name << ": Invalid index" << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}

Character::~Character(){
	std::cout << this->_name << ": Destructor called" << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}