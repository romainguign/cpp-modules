/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:15:46 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/10 13:25:04 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog : Constructor called" << std::endl;
}

Dog::Dog(const Dog &c) : Animal("Dog") {
	*this = c;
	std::cout << "Dog : Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other){
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Wouaf wouaf wouaf !" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog : Destructor called " << std::endl;
}
