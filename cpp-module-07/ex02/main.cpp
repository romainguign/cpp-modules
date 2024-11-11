/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:02:54 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/11 17:37:26 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main(void) 
{
    std::cout << "----- Array of int -----" << std::endl;

    Array<int> array(5);
    Array<int> array1;
    
    array[0] = 42;
    array[1] = 21;
    
    Array<int> array2 = array;
    Array<int> array3(array);
    
    std::cout << "Array size: " << array.size() << std::endl;
    std::cout << "Array2 size: " << array2.size() << std::endl;
    std::cout << "Array3 size: " << array3.size() << std::endl;

    std::cout << "Array :" << std::endl;
    printArray(array);

    std::cout << "\nArray1 :" << std::endl;
    printArray(array1);

    std::cout << "\nArray2 :" << std::endl;
    printArray(array2);

    std::cout << "\nArray3 :" << std::endl;
    printArray(array3);

    try {
        std::cout << array[5] << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n----- Array of string -----" << std::endl;

    Array<std::string> array4(5);

    array4[0] = "Hello";
    array4[1] = "World";
    array4[2] = "!";

    printArray(array4);
    return 0;
}