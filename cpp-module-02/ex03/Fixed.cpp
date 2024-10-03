/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:30:04 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/03 13:10:03 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _value(0){
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value){
	// std::cout << "Int constructor called" << std::endl;
	_value = value << _fract_bits;
}

Fixed::Fixed(const float value){
	// std::cout << "Float constructor called" << std::endl;
	_value = roundf(value * (1 << _fract_bits));
}

Fixed::Fixed(const Fixed &f) : _value(f._value){
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(){
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	return (this->_value);
}
void Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

float	Fixed::toFloat( void ) const
{
	 return ((float)(_value) / (1 << _fract_bits));
}

int		Fixed::toInt( void ) const
{
	return (this->_value >> this->_fract_bits);
}

Fixed &Fixed::operator=(const Fixed &other){
	// std::cout << "Copy assignment operator called " << std::endl;
	if (this != &other)
		this->_value = other.getRawBits();
	return (*this);
}

bool Fixed::operator>(const Fixed& b)
{
	return (this->getRawBits() > b.getRawBits());
}

bool Fixed::operator<(const Fixed& b)
{
	return (this->getRawBits() < b.getRawBits());
}

bool Fixed::operator>=(const Fixed& b)
{
	return (this->getRawBits() >= b.getRawBits());
}

bool Fixed::operator<=(const Fixed& b)
{
	return (this->getRawBits() <= b.getRawBits());
}

bool Fixed::operator==(const Fixed& b)
{
	return (this->getRawBits() == b.getRawBits());
}

bool Fixed::operator!=(const Fixed& b)
{
	return (this->getRawBits() != b.getRawBits());
}

Fixed Fixed::operator+(const Fixed& b)
{
	return (Fixed(this->toFloat() + b.toFloat()));
}

Fixed Fixed::operator-(const Fixed& b)
{
	return (Fixed(this->toFloat() - b.toFloat()));
}

Fixed Fixed::operator*(const Fixed& b)
{
	return (Fixed(this->toFloat() * b.toFloat()));
}

Fixed Fixed::operator/(const Fixed& b)
{
	return (Fixed(this->toFloat() / b.toFloat()));
}

Fixed& Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	
	this->setRawBits(this->getRawBits() + 1);
	return (tmp);
}

Fixed& Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	
	this->setRawBits(this->getRawBits() - 1);
	return (tmp);
}


std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    os << obj.toFloat();
    return (os);
}

Fixed	&Fixed::max(Fixed& a, Fixed& b)
{
	return ( a > b ? a : b);
}

const Fixed	&Fixed::max(const Fixed& a, const Fixed& b)
{
	return ( a.getRawBits() > b.getRawBits() ? a : b);
}

Fixed	&Fixed::min(Fixed& a, Fixed& b)
{
	return ( a < b ? a : b);
}

const Fixed	&Fixed::min(const Fixed& a, const Fixed& b)
{
	return ( a.getRawBits() < b.getRawBits() ? a : b);
}
