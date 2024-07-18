/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:52:19 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/18 14:15:09 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N;

	N = 20;
	Zombie *horde = zombieHorde( N, "Tsunami");
	for (int i = 0; i < N; i++)
	{
		std::cout << "--------------Zombie num : " << i + 1 << "--------------" << std::endl;
		horde[i].announce();
		std::cout << std::endl;
	}
	delete[] horde;
	return (0);
}