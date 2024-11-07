/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:37:16 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/07 15:27:58 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern tom;
    
    AForm *shrub = tom.makeForm("ShrubberyCreationForm", "home");
    AForm *robot = tom.makeForm("RobotomyRequestForm", "Terminator");
    AForm *pres = tom.makeForm("PresidentialPardonForm", "Tareq");

    std::cout << "\n-------- test Failed Form --------" << std::endl;
    AForm *failed = tom.makeForm("Failed", "Failed");
    (void)failed;
    
    std::cout << std::endl;
    Bureaucrat boss("Boss", 1);
    std::cout << "\n-------- test Shrubbery Form --------" << std::endl;
    try {
        boss.signAForm(*shrub);
        shrub->execute(boss);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n-------- test Robotomy Form --------" << std::endl;
    try {
        boss.signAForm(*robot);
        robot->execute(boss);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "\n-------- test Presidential Form --------" << std::endl;
    try {
        boss.signAForm(*pres);
        pres->execute(boss);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }

    delete shrub;
    delete robot;
    delete pres;
    return (0);
}