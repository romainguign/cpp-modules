/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:37:39 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/07 13:52:03 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default"){
	std::cout << "PresidentialPardonForm : Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) : AForm("PresidentialPardonForm", 25, 5), _target(target){
	std::cout << "PresidentialPardonForm : Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &c) : AForm("PresidentialPardonForm", 25, 5), _target(c._target) {
	*this = c;
	std::cout << "PresidentialPardonForm : Copy constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &c) {
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &c)
		this->setSigned(c.getSigned());
	return (*this);
}

const std::string PresidentialPardonForm::getTarget() const{
	return (this->_target);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const{
	if (!this->getSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > (unsigned int) this->getGradeToExecute())
		throw AForm::GradeTooLowException();
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox 🦾🤖" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialPardonForm : Destructor called " << std::endl;
}