/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:02:54 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/12 14:54:35 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main(void) 
{

    std::cout << "--- Testing with a vector of int ---" << std::endl;

    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    std::vector<int>::iterator it;

    try {
        it = easyfind(v, 5);
        std::cout << "Value found in container : " << *it << std::endl;
        *it = 42;
        printContainer(v);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        it = easyfind(v, 10);
        std::cout << "Value found in container : " << *it << std::endl;
        *it = 42;
        printContainer(v);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}