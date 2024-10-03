/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:37:16 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/03 11:16:38 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// Fixed c(25.36f);
	Fixed d(12.12f);
	
	std::cout << "1 :" << a << std::endl;
	std::cout << "2 :" << ++a << std::endl;
	std::cout << "3 :" << a << std::endl;
	std::cout << "4 :" << a++ << std::endl;
	std::cout << "5 :" << a << std::endl;
	std::cout << "6 :" << b << std::endl;
	// std::cout << "----------------- comp -----------------" << std::endl;
	// if (c > a)
	// 	std::cout << "oui" << std::endl;
	// if (!(c < a))
	// 	std::cout << "non" << std::endl;
	// if (c >= a)
	// 	std::cout << "oui" << std::endl;
	// if (!(c <= a))
	// 	std::cout << "non" << std::endl;
	// if (c != a)
	// 	std::cout << "oui" << std::endl;
	// if (!(c == a))
	// 	std::cout << "non" << std::endl;
	// std::cout << "----------------- min -----------------" << std::endl;
	// std::cout << Fixed::min( b, a ) << std::endl;
	// std::cout << Fixed::min(c, d) << std::endl;
	// std::cout << "----------------- max -----------------" << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	// std::cout << Fixed::max(c, d) << std::endl;
	return 0;
}