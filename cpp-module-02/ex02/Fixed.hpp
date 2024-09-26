/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:27:51 by roguigna          #+#    #+#             */
/*   Updated: 2024/09/26 18:26:02 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	private:
		int	_value;
		static const int _fract_bits = 8;
		
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &f);
		
		Fixed& operator=(const Fixed& other);
		
		bool 	operator>(const Fixed& b);
		bool 	operator<(const Fixed& b);
		bool 	operator>=(const Fixed& b);
		bool 	operator<=(const Fixed& b);
		bool 	operator==(const Fixed& b);
		bool 	operator!=(const Fixed& b);
		
		Fixed 	operator+(const Fixed& b);
		Fixed 	operator-(const Fixed& b);
		Fixed	 operator*(const Fixed& b);
		Fixed 	operator/(const Fixed& b);

		Fixed	& operator++();
		Fixed 	operator++(int);
		Fixed	& operator--();
		Fixed 	operator--(int);

		static const Fixed&	max(const Fixed &a, const Fixed &b);
		static Fixed&		max( Fixed &a,  Fixed &b);
		static const Fixed&	min(const Fixed &a, const Fixed &b);
		static Fixed&		min( Fixed &a,  Fixed &b);
		
		~Fixed();
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif