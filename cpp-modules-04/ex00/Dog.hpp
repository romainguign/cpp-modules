/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:10:20 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/02 17:15:01 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{

	public:
		
		Dog();
		Dog(std::string type);
		Dog(const Dog &a);
		
		Dog& operator=(const Dog& other);

        void makeSound()const;
        
		~Dog();
};

#endif