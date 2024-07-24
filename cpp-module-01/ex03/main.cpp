/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:52:19 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/24 12:12:21 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

int main()
{
		// {
		// Weapon club = Weapon("crude spiked club");
		// HumanA bob("Bob", club);
		// bob.attack();
		// club.setType("some other type of club");
		// bob.attack();
		// }
		{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		}
	return 0;
}