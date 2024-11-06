/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:10:20 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/03 20:05:22 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		
		Dog();
		Dog(std::string type);
		Dog(const Dog &a);
		
		Dog& operator=(const Dog& other);

        virtual void makeSound()const;
        
		~Dog();
};

#endif