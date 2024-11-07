/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:37:16 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/07 14:24:34 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    
    std::cout << "-------- test Shrubbery Form --------" << std::endl;
    try {
        Bureaucrat eddy("Eddy", 1);
        ShrubberyCreationForm home("home");
        std::cout << home << std::endl;
        eddy.signAForm(home);
        home.execute(eddy);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\n-------- test Robotomy Form --------" << std::endl;
    try {
        Bureaucrat eddy("Eddy", 1);
        RobotomyRequestForm terminator("Terminator");
        eddy.signAForm(terminator);
        terminator.execute(eddy);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\n-------- test Presidential Form --------" << std::endl;
    try {
        Bureaucrat eddy("Eddy", 1);
        PresidentialPardonForm tareq("Tareq");
        eddy.signAForm(tareq);
        tareq.execute(eddy);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\n-------- test ExecuteForm test --------" << std::endl;
    try {
        PresidentialPardonForm tareq("Tareq");
        std::cout << tareq << std::endl;
        
        std::cout << "\nnot grade to low :" << std::endl;
        Bureaucrat eddy("Thomas", 6);
        eddy.executeAForm(tareq);
        
        std::cout << "\nnot signed test :" << std::endl;
        Bureaucrat axel("Axel", 5);
        
        std::cout << "\ntest success :" << std::endl;
        axel.executeAForm(tareq);
        axel.signAForm(tareq);
        axel.executeAForm(tareq);
        std::cout << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    return (0);
}