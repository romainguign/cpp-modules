/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:39:05 by roguigna          #+#    #+#             */
/*   Updated: 2024/09/26 20:14:38 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
    // std::cout << "Point : Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
    // std::cout << "Point : Float constructor called" << std::endl;
}

Point::Point(const Point &p) : _x(p._x), _y(p._y){
	// std::cout << "Point : Copy constructor called" << std::endl;
}

Point::~Point(){
    // std::cout << "Point : Default destructor called" << std::endl;
}

const Fixed   Point::getFixedX() const{
    return (this->_x);
}

const Fixed   Point::getFixedY() const{
    return (this->_y);
}

Point &Point::operator=(const Point &other){
	// std::cout << "Point : Copy assignment operator called " << std::endl;
	(void)other;
	return (*this);
}
