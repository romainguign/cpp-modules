/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:37:16 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/08 13:35:17 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAAnimal.hpp"

int main()
{

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;
	delete i;

	AAnimal *AAnimal[100];
	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			AAnimal[i] = new Dog();
		else
			AAnimal[i] = new Cat();
	}
	for (int i = 0; i < 100; i++)
	{
		std::cout << i + 1 << " : " << AAnimal[i]->getType() << std::endl;
		delete AAnimal[i];
	}

	// comment makesound of WrongCat to see the difference
	
	return 0;
}