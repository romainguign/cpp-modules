/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:05:45 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/14 13:47:32 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _n(0)
{
	std::cout << "Span created with size 0" << std::endl;
}

Span::Span(unsigned int n) : _n(n)
{
	std::cout << "Span created with size " << n << std::endl;
}

Span::Span(Span const & src)
{
	*this = src;
}

Span & Span::operator=(Span const & rhs)
{
	_n = rhs._n;
	_l = rhs._l;
	return *this;
}

void Span::addNumber(int n)
{
	if (_l.size() >= _n)
		throw std::runtime_error("Span is full");
	_l.push_back(n);
}

int Span::longestSpan(void)
{
	if (_l.size() < 2)
		throw std::runtime_error("Not enough numbers in Span");
	int min = *std::min_element(_l.begin(), _l.end());
	int max = *std::max_element(_l.begin(), _l.end());
	return max - min;
}

int Span::shortestSpan(void)
{
	int _shortestSpan = INT_MAX;

	if (_l.size() < 2)
		throw std::runtime_error("Not enough numbers in Span");
	_l.sort();
	std::list<int>::const_iterator curr = _l.begin();
	std::list<int>::const_iterator next = ++_l.begin();
	while (next != _l.end())
	{
		if (*next - *curr < _shortestSpan)
			_shortestSpan = *next - *curr;
		curr++;
		next++;
	}
	return _shortestSpan;
}

Span::~Span(void)
{
	std::cout << "Span destroyed" << std::endl;
}