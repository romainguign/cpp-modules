/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:23:39 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/10 14:26:52 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < MAX_MATERIA; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &c){
	*this = c;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &c){
	if (this != &c)
	{
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

void MateriaSource::learnMateria(AMateria* m){
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "MateriaSource : Inventory is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	}
	std::cout << "MateriaSource : Materia type '" << type << "' not found " << std::endl;
	return (NULL);
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}