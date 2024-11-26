/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:49:24 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/26 15:09:47 by roguigna         ###   ########.fr       */
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

static void fordJohnsonSortVector(std::vector<int> &v1)
{
	   if (v1.size() <= 1)
        return;

    std::vector<int> small, large;
    for (size_t i = 0; i + 1 < v1.size(); i += 2) {
        if (v1[i] < v1[i + 1]) {
            small.push_back(v1[i]);
            large.push_back(v1[i + 1]);
        } else {
            small.push_back(v1[i + 1]);
            large.push_back(v1[i]);
        }
    }

    if (v1.size() % 2 == 1)
        small.push_back(v1.back());

    fordJohnsonSortVector(large);
	std::vector<int> result = large;

    for (size_t i = 0; i < small.size(); ++i) {
        std::vector<int>::iterator it = std::lower_bound(result.begin(), result.end(), small[i]);
        result.insert(it, small[i]);
    }
    v1 = result;
}

static void fordJohnsonSortDeque(std::deque<int> &v1)
{
	   if (v1.size() <= 1)
        return;

    std::deque<int> small, large;
    for (size_t i = 0; i + 1 < v1.size(); i += 2) {
        if (v1[i] < v1[i + 1]) {
            small.push_back(v1[i]);
            large.push_back(v1[i + 1]);
        } else {
            small.push_back(v1[i + 1]);
            large.push_back(v1[i]);
        }
    }

    if (v1.size() % 2 == 1)
        small.push_back(v1.back());

    fordJohnsonSortDeque(large);
	std::deque<int> result = large;

    for (size_t i = 0; i < small.size(); ++i) {
        std::deque<int>::iterator it = std::lower_bound(result.begin(), result.end(), small[i]);
        result.insert(it, small[i]);
    }
    v1 = result;
}

void PmergeMe::displayAndSort()
{
	std::cout << "Before: ";
	for (std::vector<int>::iterator it = _v1.begin(); it != _v1.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::clock_t startVec = std::clock();
	fordJohnsonSortVector(_v1);
	std::clock_t startDeque = std::clock();
	std::clock_t endVec = std::clock();
	fordJohnsonSortDeque(_d1);
	std::clock_t endDeque = std::clock();
	
	std::cout << "After: ";
	// //to check if the vector is sorted
	// for (std::vector<int>::iterator it = _v1.begin(); it != _v1.end(); it++) 
	// 	std::cout << *it << " ";
	//to check if the deque is sorted :
	for (std::deque<int>::iterator it = _d1.begin(); it != _d1.end(); it++) 
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