/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:37:16 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/11 16:25:15 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "-------- test constructor --------" << std::endl;
    try{
        Bureaucrat eddy("Eddy", 151);
        std::cout << eddy << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        Bureaucrat eddy("Eddy", 0);
        std::cout << eddy << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        Bureaucrat eddy("Eddy", -1);
        std::cout << eddy << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        Bureaucrat eddy("Eddy", 42);
        std::cout << eddy << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\n-------- test increment --------" << std::endl;
    try{
        Bureaucrat eddy("Eddy", 5);
        for (int i = 0; i < 10; i++){
            eddy.incrementGrade();
            std::cout << eddy << std::endl;
        }
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\n-------- test decrement --------" << std::endl;
    try{
        Bureaucrat eddy("Eddy", 145);
        for (int i = 0; i < 10; i++){
            eddy.decrementGrade();
            std::cout << eddy << std::endl;
        }
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
}