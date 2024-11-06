/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:27:51 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/03 20:42:34 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	protected:
		std::string	type;
	
	public:
		
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &a);
		
		AAnimal& operator=(const AAnimal& other);

		std::string getType()const;
		virtual void makeSound() const = 0;

		virtual ~AAnimal();
};

#endif