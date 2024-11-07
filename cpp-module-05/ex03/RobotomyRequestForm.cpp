/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:59:13 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/07 13:40:16 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default"){
	std::cout << "RobotomyRequestForm : Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) : AForm("RobotomyRequestForm", 72, 45), _target(target){
	std::cout << "RobotomyRequestForm : Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &c) : AForm("RobotomyRequestForm", 72, 45), _target(c._target) {
	*this = c;
	std::cout << "RobotomyRequestForm : Copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &c) {
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &c)
		this->setSigned(c.getSigned());
	return (*this);
}

const std::string RobotomyRequestForm::getTarget() const{
	return (this->_target);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const{
	if (!this->getSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > (unsigned int) this->getGradeToExecute())
		throw AForm::GradeTooLowException();
    std::cout << "Bzzzzzzzzzzzzz bzzbzz bzzzzzzzbbzzzzzzzzz" << std::endl;
    unsigned int seed = static_cast<unsigned int>(time(NULL)) ^ reinterpret_cast<unsigned long>(&_target);
    srand(seed);
    if (rand() % 2)
        std::cout << this->_target << " has been robotomized successfully ✅✅✅✅" << std::endl;
    else
        std::cout << this->_target << " robotimized : fail ❌❌❌❌" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequestForm : Destructor called " << std::endl;
}