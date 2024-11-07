/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:59:10 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/07 13:38:40 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <iostream>
# include "AForm.hpp"
# include <time.h>
# include <stdlib.h> 

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	private:
		const std::string	_target;
		RobotomyRequestForm();
		
	public:
		RobotomyRequestForm(const std::string & target);
		RobotomyRequestForm(RobotomyRequestForm const & c);
		RobotomyRequestForm &operator=(RobotomyRequestForm const & c);

		virtual void execute(const Bureaucrat& executor) const;

		const std::string getTarget() const;
		
		virtual ~RobotomyRequestForm();
};

#endif