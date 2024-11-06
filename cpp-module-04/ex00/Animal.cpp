/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:30:04 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/03 20:17:15 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type ("Random Animal"){
	std::cout << "Animal : Constructor called" << std::endl;
}

Animal::Animal(const std::string type) : type(type){
	std::cout << "Animal : Constructor called" << std::endl;
}

Animal::Animal(const Animal &c)
{
	*this = c;
	std::cout << "Animal : Copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other){
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

std::string	Animal::getType()const{
	return (this->type);
}

void	Animal::makeSound() const{
	std::cout << "Animal sound" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal : Destructor called " << std::endl;
}
