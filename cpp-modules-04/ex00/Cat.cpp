/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:15:46 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/08 13:25:38 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat : Constructor called" << std::endl;
}

Cat::Cat(const Cat &c) : Animal("Cat") {
	*this = c;
	std::cout << "Cat : Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other){
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &other)
		this->type = other.getType();
	return (*this);
}

void    Cat::makeSound() const {
    std::cout << "Meow meow meow meow !" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat : Destructor called " << std::endl;
}
