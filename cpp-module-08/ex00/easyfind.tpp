/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                        	               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:33:07 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/12 13:50:10 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw std::runtime_error("Value not found in container.");
    }
    return it;
}

template <typename T>
void printContainer(const T& container) {
	int i;

	i = 0;
	for (typename T::const_iterator it = container.begin(); it != container.end(); it++) {
		std::cout << i << ": "<< *it << std::endl;
		i++;
	}
	std::cout << std::endl;
}

#endif