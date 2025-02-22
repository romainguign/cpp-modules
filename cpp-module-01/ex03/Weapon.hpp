/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:29:47 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/18 16:59:06 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>

class 	Weapon
{

	private:
		std::string	_type;

	public:
		Weapon(std::string	type);
		~Weapon();
		
		std::string	const &getType();
		void		setType(std::string type);
};


#endif