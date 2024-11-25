/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:49:24 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/25 15:02:40 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	_v1 = std::vector<int>();
	_d1 = std::deque<int>();
}

PmergeMe::PmergeMe(int argc, char **argv)
{
	fillContainers(argc, argv);
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	_v1 = other.getV1();
	_d1 = other.getD1();
	return *this;
}

std::vector<int>	PmergeMe::getV1() const
{
	return _v1;
}

std::deque<int>		PmergeMe::getD1() const
{
	return _d1;
}

void PmergeMe::fillContainers(int argc, char **argv)
{
	std::string arg;
	
	if (argc < 2)
		throw std::invalid_argument("Not enough arguments");
	for (int i = 1; i < argc; i++)
	{
		arg = argv[i];
		if (arg.find_first_not_of("0123456789") && arg.size() >= 1)
		{
			_v1.push_back(std::strtol(arg.c_str(), NULL, 10));
			_d1.push_back(std::strtol(arg.c_str(), NULL, 10));
		}
		else
			throw std::invalid_argument("Invalid argument");
	}
}



void PmergeMe::displayAndSort()
{
	std::cout << "Before: ";
	for (std::vector<int>::iterator it = _v1.begin(); it != _v1.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::clock_t startVec = std::clock();
	void sortVector();
	std::clock_t startDeque = std::clock();
	std::clock_t endVec = std::clock();
	void sortDeque();
	std::clock_t endDeque = std::clock();
	
	std::cout << "After: ";
	for (std::vector<int>::iterator it = _v1.begin(); it != _v1.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	
	double duration = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC * 1e6;
	std::cout << "Time to process a range of " << _v1.size() << " elements with std::vector : " << duration << " us" << std::endl;
	duration = static_cast<double>(endDeque - startDeque) / CLOCKS_PER_SEC * 1e6;
	std::cout << "Time to process a range of " << _d1.size() << " elements with std::deque  : " << duration << " us" << std::endl;

}

PmergeMe::~PmergeMe()
{
}