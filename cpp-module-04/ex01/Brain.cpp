/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:33:56 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/08 13:24:44 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Need Food";
	std::cout << "Brain  : Constructor called" << std::endl;
}

Brain::Brain(const Brain &c)
{
	*this = c;
	std::cout << "Brain : Copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other){
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}


Brain::~Brain(){
	std::cout << "Brain  : Destructor called " << std::endl;
}
