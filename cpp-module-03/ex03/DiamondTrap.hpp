/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:45:58 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/02 15:29:58 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		std::string _name;
		
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &c);
		
		DiamondTrap& operator=(const DiamondTrap& other);
		
		void attack(std::string& target);
		void whoAmI();
		
		~DiamondTrap();
};


#endif
