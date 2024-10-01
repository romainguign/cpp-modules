/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:37:16 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/01 15:38:51 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {

	ClapTrap clap("Clap");
	ClapTrap clap1(clap);
	ClapTrap clap2 = clap1;
	std::string	trap = "Trap";

	for (int i = 0; i < 11; i++)
		clap1.attack(trap);
	for (int i = 0; i < 11; i++)
		clap2.beRepaired(10);
	for (int i = 0; i < 11; i++)
		clap.takeDamage(1);
	return 0;
}