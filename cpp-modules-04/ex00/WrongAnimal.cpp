/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:30:04 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/10 13:08:23 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type ("Random WrongAnimal"){
	std::cout << "WrongAnimal : Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : type(type){
	std::cout << "WrongAnimal : Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &c)
{
	*this = c;
	std::cout << "WrongAnimal : Copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &other)
		this->type = other.getType();
	return (*this);
}

std::string	WrongAnimal::getType()const{
	return (this->type);
}

void	WrongAnimal::makeSound() const{
	std::cout << "MEUHHHHHHH MIAM COUCOU HI-HAN" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal : Destructor called " << std::endl;
}
