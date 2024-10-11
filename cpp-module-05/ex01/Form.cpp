/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:49:51 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/11 16:31:57 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const & name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign){
	std::cout << "Form : Constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	_signed = false;
}

Form::Form(const Form &c) : _name(c._name), _gradeToExecute(c._gradeToExecute), _gradeToSign(c._gradeToSign) {
	*this = c;
	std::cout << "Form : Copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &c) {
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &c)
		_signed = c._signed;
	return (*this);
}

void Form::beSigned(const Bureaucrat& obj)
{
	if (obj.getGrade() > (unsigned int) this->_gradeToSign)
		throw GradeTooLowException() ;
	this->_signed = true;
}

const std::string Form::getName() const{
	return (this->_name);
}

int Form::getGradeToSign() const{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute() const{
	return (this->_gradeToExecute);
}

bool Form::getSigned() const{
	return (this->_signed);
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
	os << "Form name        : " << obj.getName() << std::endl;
	os << "Grade to sign    : " << obj.getGradeToSign() << std::endl;
	os << "Grade to execute : " << obj.getGradeToExecute() << std::endl;
	if (obj.getSigned() == true)
		os << "Signed : " << "yes" << std::endl;
	else
		os << "Signed : " << "no" << std::endl;
    return (os);
}

const char *Form::GradeTooHighException::what() const throw(){
	return ("Form: Grade too high");
}

const char *Form::GradeTooLowException::what() const throw(){
	return ("Form: Grade too low");
}

Form::~Form(){
	std::cout << "Form : Destructor called " << std::endl;
}