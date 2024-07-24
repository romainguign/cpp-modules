/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:30:39 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/24 12:26:43 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B

#include "HumanA.hpp"

class 	HumanB
{

	private:
		std::string	_name;
		Weapon		*_weapon;
		
	public:
		HumanB(std::string	name);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon &weapon);

};

#endif