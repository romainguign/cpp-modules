/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:52:19 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/18 14:27:05 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "• The memory address of the string variable : " << &string << std::endl;
	std::cout << "• The memory address held by stringPTR      : " << stringPTR << std::endl;
	std::cout << "• The memory address held by stringREF      : " << &stringREF << std::endl;

	std::cout << std::endl;
	
	std::cout << "• The value of the string variable          : " << string << std::endl;
	std::cout << "• The value pointed to by stringPTR         : " << *stringPTR << std::endl;
	std::cout << "• The value pointed to by stringPTR         : " << stringREF << std::endl;
	return (0);
}