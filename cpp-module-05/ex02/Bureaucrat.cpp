/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:49:51 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/07 14:06:24 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"){
	std::cout << "Bureaucrat : Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name){
	std::cout << "Bureaucrat : Constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &c) : _name(c._name) {
	*this = c;
	std::cout << "Bureaucrat : Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &c) {
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &c)
		_grade = c._grade;
	return (*this);
}

void	Bureaucrat::decrementGrade() {
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::incrementGrade() {
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

const std::string Bureaucrat::getName() const{
	return (this->_name);
}
unsigned int Bureaucrat::getGrade() const {
	return (this->_grade);
}

void Bureaucrat::signAForm(AForm& obj)
{
	if (this->_grade > (unsigned int) obj.getGradeToSign())
	{
		std::cout << this->_name << " couldn’t sign " << obj.getName() << " because bureaucrat's grade too low." << std::endl;
		return ;
	}
	obj.beSigned(*this);
	std::cout << obj.getName() << " signed " << this->_name << std::endl;
}

void Bureaucrat::executeAForm(AForm const & form){
	if (this->_grade > (unsigned int) form.getGradeToExecute())
	{
		std::cout << this->_name << " couldn’t execute " << form.getName() << " because bureaucrat's grade too low." << std::endl;
		return ;
	}
	if (form.getSigned())
	{
		std::cout << this->_name << " executes " << form.getName() << std::endl;
		form.execute(*this);
	}
	else
		std::cout << this->_name << " couldn’t execute " << form.getName() << " because form is not signed." << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return (os);
}


const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Bureaucrat: Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Bureaucrat: Grade too low");
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat : Destructor called " << std::endl;
}