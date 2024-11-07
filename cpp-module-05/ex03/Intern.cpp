/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:28:57 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/07 15:27:20 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() : _target("default"){
    std::cout << "Intern : Default constructor called" << std::endl;
}

Intern::Intern(Intern const & c){
    *this = c;
    std::cout << "Intern : Copy constructor called" << std::endl;
}

Intern &Intern::operator=(Intern const & c){
    (void)c;
    std::cout << "Copy assignment operator called " << std::endl;
    return (*this);
}

static AForm *makeRobotForm(const std::string & target){
    return new RobotomyRequestForm(target);
}

static AForm *makeShrubberyForm(const std::string & target){
    return new ShrubberyCreationForm(target);
}

static AForm *makePresidentialForm(const std::string & target){
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target){
    AForm *(*forms[3])(const std::string & target) = {&makeRobotForm, &makeShrubberyForm, &makePresidentialForm};
    std::string formNames[3] = {"RobotomyRequestForm", "ShrubberyCreationForm", "PresidentialPardonForm"};

    for (int i = 0; i < 3; i++){
        if (formName == formNames[i]){
            std::cout << "Intern creates " << formName << std::endl;
            return forms[i](target);
        }
    }
    std::cout << formName << ": form doesn't exist" << std::endl;
    return NULL;
}

Intern::~Intern(){
    std::cout << "Intern : Destructor called " << std::endl;
}