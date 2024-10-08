/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:30:04 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/08 13:32:26 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal() : type ("Random WrongAAnimal"){
	std::cout << "WrongAAnimal : Constructor called" << std::endl;
}

WrongAAnimal::WrongAAnimal(const std::string type) : type(type){
	std::cout << "WrongAAnimal : Constructor called" << std::endl;
}

WrongAAnimal::WrongAAnimal(const WrongAAnimal &c) {
	*this = c;
	std::cout << "WrongAAnimal : Copy constructor called" << std::endl;
}

WrongAAnimal &WrongAAnimal::operator=(const WrongAAnimal &other){
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &other)
		this->type = other.getType();
	return (*this);
}

std::string	WrongAAnimal::getType()const{
	return (this->type);
}

void	WrongAAnimal::makeSound() const{
	std::cout << "WrongAAnimal sound" << std::endl;
}

WrongAAnimal::~WrongAAnimal(){
	std::cout << "WrongAAnimal : Destructor called " << std::endl;
}
