/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:10:20 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/08 13:27:57 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
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