/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:02:54 by roguigna          #+#    #+#             */
/*   Updated: 2024/11/11 15:30:25 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) 
{

    std::cout << "------------ test with int -------------" << std::endl;
    int tab[] = {0, 1, 2, 3, 4};
    iter(tab, 5, print);

    std::cout << "\n---------- test with string -----------" << std::endl;
    std::string tab2[] = {"yo", "les", "petits", "potes !"};
    iter(tab2, 4, print);

    std::cout << "\n----------- test with float ------------" << std::endl;
    float tab3[] = {0.42, 1.42, 2.42, 3.42, 4.42};
    iter(tab3, 5, print);

    return 0;
}