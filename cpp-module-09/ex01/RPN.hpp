/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:49:15 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/21 19:49:16 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <stdlib.h> 

class RPN
{
	private:
		std::stack<double> _stack;
		std::string _input;
		RPN();

	public:
		RPN(std::string input);
		RPN(const RPN &other);

		RPN &operator=(const RPN &other);

		void run();

		std::string getInput() const;

		~RPN();
};


#endif