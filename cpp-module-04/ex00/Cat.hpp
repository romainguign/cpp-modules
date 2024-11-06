/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:10:30 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/10 13:23:25 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{

	public:
		Cat();
		Cat(const Cat &a);
		
		Cat& operator=(const Cat& other);

        virtual void makeSound() const;
        
		~Cat();
};

#endif