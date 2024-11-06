/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:27:51 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/08 13:30:46 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class WrongAAnimal
{
	protected:
		std::string	type;
	
	public:
		
		WrongAAnimal();
		WrongAAnimal(std::string type);
		WrongAAnimal(const WrongAAnimal &a);
		
		WrongAAnimal& operator=(const WrongAAnimal& other);

		std::string getType()const;
		virtual void makeSound() const = 0;

		virtual ~WrongAAnimal();
};

#endif