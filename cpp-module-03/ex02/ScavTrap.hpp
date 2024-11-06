/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:45:58 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/02 15:30:17 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{	
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &c);
		
		ScavTrap& operator=(const ScavTrap& other);
		
		void guardGate();
		
		~ScavTrap();
};


#endif
