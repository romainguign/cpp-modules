/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:02:54 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/14 13:22:53 by roguigna         ###   ########.fr       */
/*																			  */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>

int main(void)
{
	std::cout << "AddNumber() test :" << std::endl;
	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "--- addManyNumbers() test ---" << std::endl;
	try {
		Span sp2 = Span(50000);
		std::vector<int> v(50000);
		for (int i = 0; i < 50000; i++)
			v[i] = i;
		sp2.addManyNumbers(v.begin(), v.end());
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "--- AddNumber() test with not enough space ---" << std::endl;
	try {
		Span sp4 = Span(5);
		sp4.addNumber(6);
		sp4.addNumber(3);
		sp4.addNumber(17);
		sp4.addNumber(9);
		sp4.addNumber(11);
		sp4.addNumber(11);
		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "--- addManyNumbers() test with not enough space ---" << std::endl;
	try {
		Span sp3 = Span(5);
		std::vector<int> v(10);
		for (int i = 0; i < 10; i++)
			v[i] = i;
		sp3.addManyNumbers(v.begin(), v.end());
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "--- Need 2 element span ---" << std::endl;
	try {
		Span sp5 = Span(5);
		sp5.addNumber(6);
		std::cout << sp5.shortestSpan() << std::endl;
		std::cout << sp5.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}