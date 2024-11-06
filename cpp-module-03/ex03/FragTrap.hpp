/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:45:58 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/02 15:33:59 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		unsigned int _attackDamage;
		int			 _hitPoint;
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &c);
		
		FragTrap& operator=(const FragTrap& other);
		
		void highFivesGuys(void);
		
		~FragTrap();
};


#endif
