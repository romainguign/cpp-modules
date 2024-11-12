/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:06:54 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/12 14:45:31 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>


template <typename T, typename F>
void iter(T* array, size_t length, F function) {
	for (size_t i = 0; i < length; ++i) {
		function(array[i]);
	}
}

template <typename T>
void printIter(T& elem) {
	std::cout << elem << std::endl;
}

#endif