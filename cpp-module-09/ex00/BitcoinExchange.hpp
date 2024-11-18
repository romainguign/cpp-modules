/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:41:48 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/14 18:34:31 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <string>
# include <sstream>
# include <stdlib.h>  

#ifndef DATA_FILE
# define DATA_FILE "data.csv"
#endif

class BitcoinExchange
{
	private:
		std::map<std::string, double> _data;
		std::map<std::string, double> _input;
	public:
		BitcoinExchange();
		~BitcoinExchange();

		void loadFile(char *filename);
		void display();
		void saveData();
};

#endif