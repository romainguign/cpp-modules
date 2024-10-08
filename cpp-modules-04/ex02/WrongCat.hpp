/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:10:30 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/08 13:34:52 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAAnimal.hpp"

class WrongCat : public WrongAAnimal
{

	public:
		WrongCat();
		WrongCat(std::string type);
		WrongCat(const WrongCat &a);
		
		WrongCat& operator=(const WrongCat& other);

        virtual void makeSound() const;
        
		~WrongCat();
};

#endif