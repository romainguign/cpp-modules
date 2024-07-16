/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:32:01 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/16 17:09:01 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>

class Contact
{
	
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
	
public:
	Contact();
	~Contact();
	
	void			setFirst_name(std::string s);
	void			setLast_name(std::string s);
	void			setNickname(std::string s);
	void			setPhone_number(std::string s);
	void			setDarkest_secret(std::string s);
	std::string		getFirst_name();
	std::string		getLast_name();
	std::string		getNickname();
	std::string		getPhone_number();
	std::string		getDarkest_secret();

};

#endif