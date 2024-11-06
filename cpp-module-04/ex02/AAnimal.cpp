/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:30:04 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/03 20:17:15 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type ("Random AAnimal"){
	std::cout << "AAnimal : Constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string type) : type(type){
	std::cout << "AAnimal : Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &c)
{
	*this = c;
	std::cout << "AAnimal : Copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other){
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

std::string	AAnimal::getType()const{
	return (this->type);
}

void	AAnimal::makeSound() const{
	std::cout << "AAnimal sound" << std::endl;
}

AAnimal::~AAnimal(){
	std::cout << "AAnimal : Destructor called " << std::endl;
}
