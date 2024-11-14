/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:06:54 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/14 13:42:48 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iterator>
#include <exception>
#include <iostream>
#include <list>
#include "limits.h"

class Span
{
    private:
        Span(void);
        unsigned int _n;
        std::list<int> _l;
    public:
        Span(unsigned int n);
        Span(Span const & src);
        ~Span(void);
        Span & operator=(Span const & rhs);

        void addNumber(int n);
        int shortestSpan(void);
        int longestSpan(void);
        template <typename T>
        void addManyNumbers(T begin, T end)
        {
            if (std::distance(begin, end) > static_cast<int>(_n - _l.size()))
                throw std::runtime_error("Not enough space in Span");
            _l.insert(_l.end(), begin, end);
        }
};

#endif