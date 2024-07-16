/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:29:12 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/16 20:11:09 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include "Contact.hpp"

class PhoneBook
{

private:
	Contact	_contact[8];
	int		_index;

public:
	PhoneBook();
	~PhoneBook();
	
	void	add_contact();
	void	search_contact();
	void	print_contact(Contact contact);

};

#endif
