/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:37:16 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/09 13:12:48 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {

	std::string	lilien = "Lilien";

	ScavTrap scav("Scav");
	scav.attack(lilien);
	scav.guardGate();
	scav.takeDamage(63);
	scav.beRepaired(47);
	scav.takeDamage(150);
	
	return 0;
}