/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:52:35 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/17 18:30:46 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{

private:
	std::string	_name;

public:
	Zombie(std::string	name);
	~Zombie();
	
	void announce( void );

	std::string	getName( void );
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif