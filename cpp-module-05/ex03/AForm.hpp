/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:49:36 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/11 16:19:52 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int	_gradeToExecute;
		const int	_gradeToSign;
		AForm();

	public:
		AForm(std::string const & name, int gradeToSign, int gradeToExecute);
		AForm(AForm const & c);
		
		AForm &operator=(AForm const & c);

		void beSigned(const Bureaucrat& obj);
		virtual void execute(const Bureaucrat& executor) const = 0;

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
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		const std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void setSigned(bool sign);
		bool getSigned() const;
		
		virtual ~AForm();
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif