/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:35:22 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/25 14:59:10 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	try{
		PmergeMe pm(argc, argv);
		pm.displayAndSort();
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}