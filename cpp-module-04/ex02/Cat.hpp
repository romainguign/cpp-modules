/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:10:30 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/08 13:27:57 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{

	private:
		Brain *brain;
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat &a);
		
		Cat& operator=(const Cat& other);

        virtual void makeSound() const;
        
		~Cat();
};

#endif