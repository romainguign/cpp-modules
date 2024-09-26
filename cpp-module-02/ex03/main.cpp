/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:37:16 by roguigna          #+#    #+#             */
/*   Updated: 2024/09/26 20:16:20 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	
	Point a(2.26f, 3.33f);
	Point b(0, 0);
	Point c(9.72f, 0.02f);
	Point p_in(5.46f, 0.5f);
	Point p_out(5.78f, 2.19f);

	if (bsp(a, b, c, p_in))
		std::cout << "p_in : The point is in the triangle" << std::endl;
	if (!bsp(a, b, c, p_in))
		std::cout << "p_in: The point is NOT in the triangle" << std::endl;
	if (bsp(a, b, c, p_out))
		std::cout << "p_out: The point is NOT in the triangle" << std::endl;
	if (!bsp(a, b, c, p_out))
		std::cout << "p_out: The point is NOT in the triangle" << std::endl;
	return 0;
}