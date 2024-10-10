/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:10:20 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/10 13:25:58 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		
		Dog();
		Dog(const Dog &a);
		
		Dog& operator=(const Dog& other);

        virtual void makeSound()const;
        
		~Dog();
};

#endif