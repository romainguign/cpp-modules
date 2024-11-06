/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:49:51 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/08 17:38:54 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
	// std::cout << "Ice     : Constructor called" << std::endl;
}

Ice::Ice(const Ice &c) : AMateria("ice"){
	*this = c;
	// std::cout << "Ice     : Copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &c){
	// std::cout << "Copy assignment operator called " << std::endl;
	if (this != &c)
		this->type = c.getType();
	return (*this);
}

AMateria* Ice::clone() const{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
Ice::~Ice(){
	// std::cout << "Ice     : Destructor called " << std::endl;
}