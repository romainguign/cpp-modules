/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:58:43 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/18 13:30:16 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (std::string	name) : _name(name)
{
	std::cout << name << " has been created !" << std::endl;
}

Zombie::~Zombie ()
{
	std::cout << getName() << " has been destroyed !" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName( void )
{
	return (this->_name);
}