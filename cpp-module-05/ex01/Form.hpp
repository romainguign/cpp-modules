/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:49:36 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/06 16:33:10 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int	_gradeToExecute;
		const int	_gradeToSign;
		Form();
		
	public:
		Form(std::string const & name, int gradeToSign, int gradeToExecute);
		Form(Form const & c);
		
		Form &operator=(Form const & c);

		void beSigned(const Bureaucrat& obj);

		class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
		class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

		const std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool getSigned() const;
		
		~Form();
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif