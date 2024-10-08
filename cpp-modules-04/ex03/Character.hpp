/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:50:26 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/08 16:58:27 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# define MAX_MATERIA 4

# include "AMateria.hpp"

class Character : public ICharacter
{
	protected:
		AMateria*	_inventory[MAX_MATERIA];
		std::string	_name;
	public:
		Character();
		Character(std::string name);
		Character(const Character &c);
		Character &operator=(const Character &c);
		
		virtual std::string const &getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		
		~Character();
};

#endif