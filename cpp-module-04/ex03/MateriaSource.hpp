/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:23:43 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/08 17:24:43 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#define MAX_MATERIA 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_inventory[MAX_MATERIA];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &c);
		MateriaSource &operator=(const MateriaSource &c);
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
		~MateriaSource();
};

#endif