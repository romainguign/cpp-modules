/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:39:03 by roguigna          #+#    #+#             */
/*   Updated: 2024/09/26 20:12:45 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed   v1;
	Fixed   v2;

	Fixed   ax = a.getFixedX();
	Fixed   ay = a.getFixedY();

	Fixed   bx = b.getFixedX();
	Fixed   by = b.getFixedY();
	
	Fixed   cx = c.getFixedX();
	Fixed   cy = c.getFixedY();

	Fixed   px = point.getFixedX();
	Fixed   py = point.getFixedY();
	
	v1 = (ax * (cy - ay) + (py - ay) * (cx - ax) - px * (cy - ay)) / 
		((by - ay) * (cx - ax) - (bx - ax) * (cy - ay));
	v2 = (py - ay - v1 * (by - ay)) / (cy - ay);
	if (v1 >= 0 && v2 >= 0 && (v1 + v2) <= 1)
		return (true);
	return (false);
}