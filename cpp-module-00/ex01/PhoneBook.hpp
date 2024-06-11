/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:29:12 by roguigna          #+#    #+#             */
/*   Updated: 2024/06/11 20:50:22 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>

class PhoneBook
{

public:
	char	*contact[8];

	PhoneBook();
	~PhoneBook();

	void	add_contact(std::str new_contact);
	
};

#endif