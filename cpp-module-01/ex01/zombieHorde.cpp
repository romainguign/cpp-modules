/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:18:55 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/18 14:01:22 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 1)
		return (0);
	Zombie	*z = new Zombie[N];

	for (int i = 0; i < N; i++)
		z[i].setName(name);
	return (z);
}