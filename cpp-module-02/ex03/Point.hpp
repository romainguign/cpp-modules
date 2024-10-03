/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:39:22 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/01 13:58:44 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
		
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &p);
		
		Point &operator=(const Point &other);
		~Point();
		
		const Fixed   getFixedX() const;
		const Fixed   getFixedY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif