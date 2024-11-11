/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:33:07 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/11 17:36:10 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {
	std::cout << "Array default constructor" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n) {
	std::cout << "Array constructor with size" << std::endl;
}

template <typename T>
Array<T>::Array(const Array& other) : _array(new T[other.size()]), _size(other.size()) {
	std::cout << "Array copy constructor" << std::endl;
	for (unsigned int i = 0; i < _size; ++i) {
		_array[i] = other._array[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	std::cout << "Array operator=" << std::endl;
	if (this != &other) {
		delete[] _array;
		_array = new T[other.size()]();
		_size = other._size();
		for (unsigned int i = 0; i < _size; ++i) {
			_array[i] = other._array[i];
		}
	}
	return *this;
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (index >= _size) {
		throw std::out_of_range("Index out of range");
	}
	return _array[index];
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= _size) {
		throw std::out_of_range("Index out of range");
	}
	return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}


template <typename T>
Array<T>::~Array() {
	std::cout << "Array destructor" << std::endl;
	delete[] _array;
}

template <typename T> 
void printArray(Array<T>& array) {
    if (!array.size()) {
        std::cout << "Array is empty" << std::endl;
        return;
    }
    try {
        for (unsigned int i = 0; i < array.size(); ++i) {
            std::cout << "'" << array[i] << "'" <<  std::endl;
            
        } 
    }
    catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }
}

#endif