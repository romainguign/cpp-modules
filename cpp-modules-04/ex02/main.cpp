/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:37:16 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/03 20:21:33 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	Animal *animal[100];
	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	for (int i = 0; i < 100; i++)
	{
		std::cout << i + 1 << " : " << animal[i]->getType() << std::endl;
		delete animal[i];
	}
	return 0;
}