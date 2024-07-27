/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:30:04 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/27 14:49:22 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout <<  "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::complain( std::string level )
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
			break ;
		i++;
	}

	switch (i)
	{
	case 0 :
		(this->*functions[0])();
	case 1 :
		(this->*functions[1])();
	case 2 :
		(this->*functions[2])();
	case 3 :
		(this->*functions[3])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}