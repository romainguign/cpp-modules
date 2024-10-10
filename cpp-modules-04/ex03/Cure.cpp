/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:49:57 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/10 14:27:40 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
	// std::cout << "Cure    : Constructor called" << std::endl;
}

Cure::Cure(const Cure &c) : AMateria("cure"){
	*this = c;
	// std::cout << "Cure    : Copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &c){
	// std::cout << "Copy assignment operator called " << std::endl;
	if (this != &c)
		this->type = c.getType();
	return (*this);
}

AMateria* Cure::clone() const{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target){
	std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
}
Cure::~Cure(){
	// std::cout << "Cure    : Destructor called " << std::endl;
}