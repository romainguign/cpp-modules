/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:15:46 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/08 13:33:55 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAAnimal("WrongCat"){
	std::cout << "WrongCat : Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c)  : WrongAAnimal("WrongCat") {
	*this = c;
	std::cout << "WrongCat : Copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other){
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &other)
		this->type = other.getType();
	return (*this);
}

void    WrongCat::makeSound() const {
    std::cout << "Meuhhhh vroummmmm coincoin" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat : Destructor called " << std::endl;
}
