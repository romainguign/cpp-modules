/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:49:51 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/11 16:31:57 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"), _signed(false),_gradeToExecute(1), _gradeToSign(1){
	std::cout << "Form : Default constructor called" << std::endl;
}

AForm::AForm(std::string const & name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign){
	std::cout << "AForm : Constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	_signed = false;
}

AForm::AForm(const AForm &c) : _name(c._name), _gradeToExecute(c._gradeToExecute), _gradeToSign(c._gradeToSign) {
	*this = c;
	std::cout << "AForm : Copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &c) {
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &c)
		_signed = c._signed;
	return (*this);
}

void AForm::beSigned(const Bureaucrat& obj)
{
	if (obj.getGrade() > (unsigned int) this->_gradeToSign)
		throw GradeTooLowException() ;
	this->_signed = true;
}

const std::string AForm::getName() const{
	return (this->_name);
}

void AForm::setSigned(bool sign){
	this->_signed = sign;
}

int AForm::getGradeToSign() const{
	return (this->_gradeToSign);
}

int AForm::getGradeToExecute() const{
	return (this->_gradeToExecute);
}

bool AForm::getSigned() const{
	return (this->_signed);
}

std::ostream& operator<<(std::ostream& os, const AForm& obj)
{
	os << "AForm name        : " << obj.getName() << std::endl;
	os << "Grade to sign    : " << obj.getGradeToSign() << std::endl;
	os << "Grade to execute : " << obj.getGradeToExecute() << std::endl;
	if (obj.getSigned() == true)
		os << "Signed : " << "yes" << std::endl;
	else
		os << "Signed : " << "no" << std::endl;
    return (os);
}

const char *AForm::GradeTooHighException::what() const throw(){
	return ("AForm: Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw(){
	return ("AForm: Grade too low");
}

AForm::~AForm(){
	std::cout << "AForm : Destructor called " << std::endl;
}