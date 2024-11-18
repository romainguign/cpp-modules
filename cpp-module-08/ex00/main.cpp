/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:02:54 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/18 12:53:32 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void) 
{

	std::cout << "--- Testing with a vector of int ---" << std::endl;

	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(5);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	std::vector<int>::iterator vectorIt;

	try {
		vectorIt = easyfind(v, 5);
		std::cout << "Value found in container : " << *vectorIt << std::endl;
		*vectorIt = 42;
		printContainer(v);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		vectorIt = easyfind(v, 10);
		std::cout << "Value found in container : " << *vectorIt << std::endl;
		*vectorIt = 42;
		printContainer(v);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--- Testing with a list of int ---" << std::endl;

	std::list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	l.push_back(6);
	l.push_back(5);
	l.push_back(7);
	l.push_back(8);
	l.push_back(9);
	std::list<int>::iterator listIt;

	try {
		listIt = easyfind(l, 5);
		std::cout << "Value found in container : " << *listIt << std::endl;
		*listIt = 42;
		printContainer(l);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		listIt = easyfind(l, 10);
		std::cout << "Value found in container : " << *listIt << std::endl;
		*listIt = 42;
		printContainer(l);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}