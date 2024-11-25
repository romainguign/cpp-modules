/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:49:09 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/25 14:58:57 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <string>
# include <cstdlib>
# include <ctime>

class PmergeMe
{
	private:
		std::vector<int> _v1;
		std::deque<int>	 _d1;
		void		fillContainers(int argc, char **argv);
		void		sortVector();
		void		sortDeque();
		PmergeMe();

	public:
		PmergeMe(int argc, char **argv);
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);

		std::vector<int>	getV1() const;
		std::deque<int>		getD1() const;

		void displayAndSort();

		~PmergeMe();
};

#endif