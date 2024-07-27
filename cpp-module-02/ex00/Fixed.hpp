/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:27:51 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/27 16:05:54 by roguigna         ###   ########.fr       */
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
		Fixed(const Fixed &f);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif