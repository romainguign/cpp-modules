/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:52:19 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/17 18:33:24 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "-------------Create a random chump----------------" << std::endl;
	randomChump("Tareq");

	std::cout << std::endl << "-------------New zombie and anounce----------------" << std::endl;
	Zombie *z = newZombie("Thomas");
	z->announce();
	delete z;
	return (0);
}