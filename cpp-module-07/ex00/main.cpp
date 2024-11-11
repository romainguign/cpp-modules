/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:02:54 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/11 14:48:09 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main(void) 
{

    std::cout << "---------- test with int -----------" << std::endl;
    
    int a = 2;
    int b = 6;

    std::cout << "a = " << a << " b = " << b << std::endl;
    std::cout << "swap(a, b)" << std::endl;
    swap(a, b);
    std::cout << "a = " << a << " b = " << b << std::endl;

    std::cout << "min(a, b) = " << min(a, b) << std::endl;
    std::cout << "max(a, b) = " << max(a, b) << std::endl;
    
    
    std::cout << "\n-------- test with char --------" << std::endl;
    
    char c1 = 'A';
    char c2 = 'B';
    
    std::cout << "c1 = '" << c1 << "' c2 = '" << c2 << "'" << std::endl;
    std::cout << "swap(c1, c2)" << std::endl;
    swap(c1, c2);
    std::cout << "c1 = '" << c1 << "' c2 = '" << c2 << "'" << std::endl;
    
    std::cout << "min(c1, c2) = '" << min(c1, c2) << "'" << std::endl;
    std::cout << "max(c1, c2) = '" << max(c1, c2) << "'" << std::endl;

    std::cout << "\n-------- test with float --------" << std::endl;\

    float f1 = 42.42;
    float f2 = 24.24;

    std::cout << "f1 = " << f1 << " f2 = " << f2 << std::endl;
    std::cout << "swap(f1, f2)" << std::endl;
    swap(f1, f2);
    std::cout << "f1 = " << f1 << " f2 = " << f2 << std::endl;

    std::cout << "min(f1, f2) = " << min(f1, f2) << std::endl;
    std::cout << "max(f1, f2) = " << max(f1, f2) << std::endl;

    return 0;
}