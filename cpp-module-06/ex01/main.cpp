/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:02:54 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/08 18:43:05 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

class ScalarConverter;

void printData(Data *data)
{
    std::cout << "Age: " << data->age << std::endl;
    std::cout << "Name: " << data->name << std::endl;
    std::cout << "Grade: " << data->grade << std::endl;
}

int main(void) 
{
    Data data;
    data.age = 42;
    data.name = "Jimy Neutron";
    data.grade = 18.99f;

    std::cout << "Before serialization: " << std::endl;
    printData(&data);

    std::cout << std::endl;
    uintptr_t raw = Serializer::serialize(&data);
    
    std::cout << "Raw: " << raw << std::endl;
    
    std::cout << std::endl;
    
    Data *ptr = Serializer::deserialize(raw);
    std::cout << "After deserialization: " << std::endl;
    printData(ptr);
    
    return 0;
}