/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:12:01 by roguigna          #+#    #+#             */
/*   Updated: 2024/06/11 17:17:24 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	argv++;
	for ( ; *argv; argv++)
	{
		std::string str = *argv;
		for (int i = 0; str[i] ; i++)
			str[i] = std::toupper(str[i]);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
