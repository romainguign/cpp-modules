/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:29:18 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/07 14:40:45 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"


class Intern
{
	private:
		const std::string	_target;
		
	public:
		Intern();
		Intern(Intern const & c);
		Intern &operator=(Intern const & c);

        AForm *makeForm(const std::string &formName, const std::string &target);
		
		~Intern();
};

#endif