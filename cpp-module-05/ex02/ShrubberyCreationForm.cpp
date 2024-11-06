/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:05:36 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/06 17:13:18 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : _target("default"),  {
	std::cout << "ShrubberyCreationForm : Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : _target(target), _gradeToExecute(137), _gradeToSign(145){
	std::cout << "ShrubberyCreationForm : Constructor called" << std::endl;
	_signed = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &c) : _target(c._target), _gradeToExecute(c._gradeToExecute), _gradeToSign(c._gradeToSign) {
	*this = c;
	std::cout << "ShrubberyCreationForm : Copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &c) {
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &c)
		_signed = c._signed;
	return (*this);
}

void ShrubberyCreationForm::beSigned(const Bureaucrat& obj)
{
	if (obj.getGrade() > (unsigned int) this->_gradeToSign)
		throw GradeTooLowException() ;
	this->_signed = true;
}

const std::string ShrubberyCreationForm::getTarget() const{
	return (this->_target);
}

int ShrubberyCreationForm::getGradeToSign() const{
	return (this->_gradeToSign);
}

int ShrubberyCreationForm::getGradeToExecute() const{
	return (this->_gradeToExecute);
}

bool ShrubberyCreationForm::getSigned() const{
	return (this->_signed);
}

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& obj)
{
	os << "ShrubberyCreationForm target        : " << obj.getTarget() << std::endl;
	os << "Grade to sign    : " << obj.getGradeToSign() << std::endl;
	os << "Grade to execute : " << obj.getGradeToExecute() << std::endl;
	if (obj.getSigned() == true)
		os << "Signed : " << "yes" << std::endl;
	else
		os << "Signed : " << "no" << std::endl;
    return (os);
}

// const char *ShrubberyCreationForm::GradeTooHighException::what() const throw(){
// 	return ("ShrubberyCreationForm: Grade too high");
// }

// const char *ShrubberyCreationForm::GradeTooLowException::what() const throw(){
// 	return ("ShrubberyCreationForm: Grade too low");
// }

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm : Destructor called " << std::endl;
}