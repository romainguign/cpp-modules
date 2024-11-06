/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:05:43 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/06 17:09:06 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include <iostream>
# include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	private:
		const std::string	_target;
		ShrubberyCreationForm();
		
	public:
		ShrubberyCreationForm(const std::string & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & c);
		
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const & c);

		void beSigned(const Bureaucrat& obj);
		virtual void execute(const Bureaucrat& executor) const = 0;

		const std::string getTarget() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool getSigned() const;
		
		virtual ~ShrubberyCreationForm();
};

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& obj);

#endif