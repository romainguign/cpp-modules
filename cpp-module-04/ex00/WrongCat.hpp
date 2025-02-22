/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:10:30 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/10 13:07:31 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:
		WrongCat();
		WrongCat(std::string type);
		WrongCat(const WrongCat &a);
		
		WrongCat& operator=(const WrongCat& other);

        void makeSound() const;
        
		~WrongCat();
};

#endif