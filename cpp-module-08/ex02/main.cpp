/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:02:54 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/14 13:22:53 by roguigna         ###   ########.fr       */
/*																			  */
/* ************************************************************************** */

#include "MutantStack.hpp" 

int main()
{
	MutantStack<int> mstack;
	std::cout << "IsEmpty : " << mstack.empty() << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "IsEmpty : " << mstack.empty() << std::endl;
	std::cout << "Print stack with iterators :" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}