/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:37:16 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/10 14:42:01 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	AMateria* saved;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	for (int i = 0; i < 3; i++)
	{
		tmp = src->createMateria("cure");
		if (i == 1)
			saved = tmp;
		me->equip(tmp);
	}
	delete tmp;
	ICharacter* bob = new Character("bob");
	std::cout << "before unequip" << std::endl;
	me->use(3, *bob);
	me->unequip(3);
	std::cout << "after unequip" << std::endl;
	me->use(3, *bob);
	delete (saved);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}