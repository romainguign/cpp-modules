/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:30:27 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/24 09:55:21 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_A
# define HUMAN_A

#include "Weapon.hpp"

class 	HumanA
{

	private:
		Weapon		&_weapon;
		std::string	_name;

	public:
		HumanA(std::string	name, Weapon &weapon);
		~HumanA();

		void	attack();
};


#endif