/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:49:24 by roguigna          #+#    #+#             */
/*   Updated: 2024/12/13 14:58:12 by roguigna         ###   ########.fr       */
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

std::vector<int> PmergeMe::getV1() const
{
	return _v1;
}

std::deque<int> PmergeMe::getD1() const
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

static std::vector<size_t> generateJacobStahlVector(size_t size)
{
    std::vector<size_t> sequence;
    if (size == 0)
        return sequence;
    sequence.push_back(0);
    
    if (size == 1)
        return sequence;
    sequence.push_back(1 * 2);
    for (size_t i = 2; i < size; ++i) {
        sequence.push_back((2 * sequence[i - 2] + sequence[i - 1]));
    }
    return sequence;
}

static std::deque<size_t> generateJacobStahlDeque(size_t size)
{
    std::deque<size_t> sequence;
    if (size == 0)
        return sequence;
    sequence.push_back(0);
    
    if (size == 1)
        return sequence;
    sequence.push_back(1 * 2);
    for (size_t i = 2; i < size; ++i) {
        sequence.push_back((2 * sequence[i - 2] + sequence[i - 1]));
    }
    return sequence;
}

static void fordJohnsonSortVector(std::vector<int> &v1)
{
    if (v1.size() <= 1)
        return;

    std::vector<int> small, large;
    for (size_t i = 0; i + 1 < v1.size(); i += 2)
    {
        if (v1[i] < v1[i + 1])
        {
            small.push_back(v1[i]);
            large.push_back(v1[i + 1]);
        }
        else
        {
            small.push_back(v1[i + 1]);
            large.push_back(v1[i]);
        }
    }

    if (v1.size() % 2 == 1)
        small.push_back(v1.back());

    fordJohnsonSortVector(large);
    std::vector<int> result = large;

    std::vector<size_t> sequence = generateJacobStahlVector(small.size());
    std::vector<bool> inserted(small.size(), false);

    for (size_t i = 0; i < sequence.size(); ++i)
    {
        if (sequence[i] < small.size())
        {
            std::vector<int>::iterator it = std::lower_bound(result.begin(), result.end(), small[sequence[i]]);
            result.insert(it, small[sequence[i]]);
            inserted[sequence[i]] = true;
        }
    }

    for (size_t i = 0; i < small.size(); ++i)
    {
        if (!inserted[i])
        {
            std::vector<int>::iterator it = std::lower_bound(result.begin(), result.end(), small[i]);
            result.insert(it, small[i]);
        }
    }

    v1 = result;
}

static void fordJohnsonSortDeque(std::deque<int> &v1)
{
    if (v1.size() <= 1)
        return;

    std::deque<int> small, large;
    for (size_t i = 0; i + 1 < v1.size(); i += 2)
    {
        if (v1[i] < v1[i + 1])
        {
            small.push_back(v1[i]);
            large.push_back(v1[i + 1]);
        }
        else
        {
            small.push_back(v1[i + 1]);
            large.push_back(v1[i]);
        }
    }

    if (v1.size() % 2 == 1)
        small.push_back(v1.back());

    fordJohnsonSortDeque(large);
    std::deque<int> result = large;

    std::deque<size_t> sequence = generateJacobStahlDeque(small.size());
    std::vector<bool> inserted(small.size(), false);

    for (size_t i = 0; i < sequence.size(); ++i)
    {
        if (sequence[i] < small.size())
        {
            std::deque<int>::iterator it = std::lower_bound(result.begin(), result.end(), small[sequence[i]]);
            result.insert(it, small[sequence[i]]);
            inserted[sequence[i]] = true;
        }
    }

    for (size_t i = 0; i < small.size(); ++i)
    {
        if (!inserted[i])
        {
            std::deque<int>::iterator it = std::lower_bound(result.begin(), result.end(), small[i]);
            result.insert(it, small[i]);
        }
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
	std::clock_t endVec = std::clock();
	std::clock_t startDeque = std::clock();
	fordJohnsonSortDeque(_d1);
	std::clock_t endDeque = std::clock();

	std::cout << "After:  ";
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
