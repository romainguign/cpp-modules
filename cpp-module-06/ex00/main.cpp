/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:02:54 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/08 15:08:57 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

class ScalarConverter;

int main(int argc, char **argv) 
{
    if (argc != 2)
    {
        std::cout << "Usage: ./convert [string]" << std::endl;
        return 1;
    }
    std::string str(argv[1]);
    ScalarConverter::convert(str);
    return 0;
}