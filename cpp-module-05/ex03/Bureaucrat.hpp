/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:49:36 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/07 14:03:19 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		unsigned int		_grade;
		Bureaucrat();
		
	public:
		Bureaucrat(std::string const & name, int grade);
		Bureaucrat(Bureaucrat const & c);
		
		Bureaucrat &operator=(Bureaucrat const & c);
		
		void decrementGrade();
		void incrementGrade();
		void signAForm(AForm& obj);
		void executeAForm(AForm const & form);


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
		unsigned int getGrade() const;
		
		~Bureaucrat();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif