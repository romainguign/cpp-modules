/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:37:16 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/02 14:53:51 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {

	std::string	lilien = "kueb";

	ScavTrap scav("Scav");
	scav.attack(lilien);
	scav.guardGate();
	scav.takeDamage(63);
	scav.beRepaired(47);
	scav.takeDamage(150);
	
	std::cout << "\n-------------------------------------------------\n" << std::endl;
	
	FragTrap frag("Frag");
	frag.highFivesGuys();
	frag.attack(lilien);
	frag.takeDamage(63);
	frag.beRepaired(47);
	frag.takeDamage(150);
	
	return 0;
}