/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:39:57 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/14 16:50:22 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{

	if (argc != 2)
	{
		std::cerr << "Usage: ./bitcoin [filename]" << std::endl;
		return (1);
	}
	try {
		BitcoinExchange exchanges;
		exchanges.loadFile(argv[1]);
		exchanges.display();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}