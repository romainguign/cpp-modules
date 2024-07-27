/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:27:51 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/27 11:32:00 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <string>
# include <iostream>

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void ); 
		void error( void );
		
	public:
		Harl();
		~Harl();
		
		void complain( std::string level );

};

#endif