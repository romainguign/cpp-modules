/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:06:54 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/12 14:37:13 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template <typename T>
class Array {
private:
	T* _array;
	unsigned int _size;

public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);

	Array& operator=(const Array& other);
	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;

	unsigned int size() const;


	~Array();
};

template <typename T>
void printArray(const Array<T>& array);

# include "Array.tpp"

#endif