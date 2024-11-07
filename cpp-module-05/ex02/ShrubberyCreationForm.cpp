/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:05:36 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/06 18:18:59 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default"){
	std::cout << "ShrubberyCreationForm : Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){
	std::cout << "ShrubberyCreationForm : Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &c) : AForm("ShrubberyCreationForm", 145, 137), _target(c._target) {
	*this = c;
	std::cout << "ShrubberyCreationForm : Copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &c) {
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &c)
		this->setSigned(c.getSigned());
	return (*this);
}

const std::string ShrubberyCreationForm::getTarget() const{
	return (this->_target);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const{
	if (!this->getSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > (unsigned int) this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout << "ShrubberyCreationForm : " << this->_target << " has been executed" << std::endl;
	std::ofstream file;
	std::string filename = this->_target + "_shrubbery";
	file.open(filename.c_str());
	if (!file.is_open())
		throw std::runtime_error("ShrubberyCreationForm : Cannot open file");
	file << "           ,@@@@@@@,                    "  << std::endl;
	file << "   ,,,.   ,@@@@@@/@@,  .oo8888o.       " << std::endl;      
	file << ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o      " << std::endl;
	file << ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'   " << std::endl;
	file << "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'   " << std::endl;
	file << "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'       " << std::endl;
	file << "`&%\\ ` /%&'    |.|        \\ '|8'       " << std::endl;
	file << "    |o|        | |         | |        " << std::endl;	
	file << "    |.|        | |         | |     " << std::endl;
	file <<	 " \\\\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_    " << std::endl;
	file << std::endl;
	file << std::endl;
	file << std::endl;
	file << "           ,@@@@@@@,                    "  << std::endl;
	file << "   ,,,.   ,@@@@@@/@@,  .oo8888o.       " << std::endl;      
	file << ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o      " << std::endl;
	file << ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'   " << std::endl;
	file << "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'   " << std::endl;
	file << "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'       " << std::endl;
	file << "`&%\\ ` /%&'    |.|        \\ '|8'       " << std::endl;
	file << "    |o|        | |         | |        " << std::endl;	
	file << "    |.|        | |         | |     " << std::endl;
	file <<	 " \\\\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_    " << std::endl;
	file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm : Destructor called " << std::endl;
}