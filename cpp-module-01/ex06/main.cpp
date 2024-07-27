/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:37:16 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/27 14:42:01 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "harlFilter takes striclty 1 argument : [ DEBUG ], [ INFOS ], [ WARNING ], or [ ERROR ]" << std::endl;
		return (1);
	}
	Harl	Harl;

	Harl.complain(argv[1]);
	return 0;
}