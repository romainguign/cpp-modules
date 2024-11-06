/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:39:57 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/08 17:39:12 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("Basic AMateria"){
	// std::cout << "AMateria : Constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type){
	// std::cout << "AMateria : Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &c){
	*this = c;
	// std::cout << "AMateria : Copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &c){
	// std::cout << "Copy assignment operator called " << std::endl;
	if (this != &c)
	{
		this->type = c.getType();
	}
	return (*this);
}

std::string const & AMateria::getType() const{
	return (this->type);
}

void AMateria::use(ICharacter& target){
	(void)target;
}

AMateria::~AMateria(){
	// std::cout << "AMateria : Destructor called " << std::endl;
}