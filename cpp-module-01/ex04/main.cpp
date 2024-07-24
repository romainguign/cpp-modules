/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:31:18 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/24 14:34:52 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

void	my_sed(std::ifstream &infile, std::string new_filename, std::string s1, std::string s2)
{
	std::ofstream 	outfile(new_filename.c_str(), std::ofstream::out);
	std::string		line;
	int				i;

	while (infile)
	{
		i = 0;
		std::getline (infile, line);
		while (line[i])
		{
			if (s1.find(line[i]) != std::string::npos)
				outfile << s2;
			else
				outfile << line[i];
			i++;
		}
		outfile << std::endl;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "The program strictly takes 3 arguments : <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	std::ifstream	file;
	std::string		new_filename;
	file.open(argv[1], std::fstream::in);
	if (!file.is_open())
	{
		std::cerr << "Error opening file." << std::endl;
		return (1);
	}
	new_filename = argv[1];
	new_filename = (std::string)new_filename.append(".replace");
	my_sed(file, new_filename, argv[2], argv[3]);
	return (0);
}