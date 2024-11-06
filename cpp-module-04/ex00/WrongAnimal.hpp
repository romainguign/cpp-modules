/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:27:51 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/10 13:07:03 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string	type;
	
	public:
		
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &a);
		
		WrongAnimal& operator=(const WrongAnimal& other);

		std::string getType()const;
		void makeSound() const;

		virtual ~WrongAnimal();
};

#endif