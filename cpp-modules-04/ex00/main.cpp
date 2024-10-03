/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:37:16 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/03 17:43:34 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	// const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* a = new Animal();
	std::cout << "j type : " << j->getType() << " " << std::endl;
	std::cout << "i type : " << i->getType() << " " << std::endl;
	std::cout << "a type : " << a->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	a->makeSound();
	
	delete(i);
	delete(j);
	delete(a);

	std::cout << "\n-------------- Wrong animal ----------------" << std::endl;

	const WrongAnimal* k = new WrongCat();
	const WrongAnimal* b = new WrongAnimal();
	std::cout << "i type : " << k->getType() << " " << std::endl;
	std::cout << "b type : " << b->getType() << " " << std::endl;
	k->makeSound(); //will output the cat sound!
	b->makeSound();
	
	delete(k);
	delete(b);
	return 0;
}