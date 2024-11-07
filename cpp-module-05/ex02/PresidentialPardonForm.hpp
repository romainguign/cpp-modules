/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:38:01 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/07 13:38:51 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include <iostream>
# include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	private:
		const std::string	_target;
		PresidentialPardonForm();
		
	public:
		PresidentialPardonForm(const std::string & target);
		PresidentialPardonForm(PresidentialPardonForm const & c);
		PresidentialPardonForm &operator=(PresidentialPardonForm const & c);

		virtual void execute(const Bureaucrat& executor) const;

		const std::string getTarget() const;
		
		virtual ~PresidentialPardonForm();
};

#endif