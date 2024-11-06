/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:37:16 by roguigna          #+#    #+#             */
/*   Updated: 2024/10/11 16:59:49 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

void    test_bureaucrat()
{
        std::cout << "-------- test constructor --------" << std::endl;
    try{
        Bureaucrat eddy("Eddy", 151);
        std::cout << eddy << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        Bureaucrat eddy("Eddy", 0);
        std::cout << eddy << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        Bureaucrat eddy("Eddy", -1);
        std::cout << eddy << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        Bureaucrat eddy("Eddy", 42);
        std::cout << eddy << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\n-------- test increment --------" << std::endl;
    try{
        Bureaucrat eddy("Eddy", 5);
        for (int i = 0; i < 10; i++){
            eddy.incrementGrade();
            std::cout << eddy << std::endl;
        }
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\n-------- test decrement --------" << std::endl;
    try{
        Bureaucrat eddy("Eddy", 145);
        for (int i = 0; i < 10; i++){
            eddy.decrementGrade();
            std::cout << eddy << std::endl;
        }
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
}

void    AForm_test()
{
            std::cout << "-------- test AForm constructor --------" << std::endl;
    try{
        AForm AForm_a("AForm_a", 151, 100);
        std::cout << AForm_a << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        AForm AForm_a("AForm_a", 0, 30);
        std::cout << AForm_a << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        AForm AForm_a("AForm_a", -1, 30);
        std::cout << AForm_a << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        AForm AForm_a("AForm_a", 42, 30);
        std::cout << AForm_a << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
}

int main()
{
    // ex00 tests : 
    // test_bureaucrat(); 
    // AForm_test();

    std::cout << "\n-------- signAForm test -------" << std::endl;
    try {
        Bureaucrat low("Jean", 42);
        Bureaucrat high("Pierre", 2);
        AForm       AForm("AFormulaire de test", 5, 32);
        std::cout << AForm << std::endl;
        low.signAForm(AForm);
        std::cout << AForm << std::endl;
        high.signAForm(AForm);
        std::cout << AForm << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\n-------- beSign test fail-------" << std::endl;
    try {
        Bureaucrat low("Jean", 42);
        AForm       AForm("AFormulaire de test", 5, 32);
        std::cout << AForm << std::endl;
        AForm.beSigned(low);
        std::cout << AForm << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\n-------- beSign test success-------" << std::endl;
    try {
        Bureaucrat high("Pierre", 2);
        AForm       AForm("AFormulaire de test", 5, 32);
        std::cout << AForm << std::endl;
        AForm.beSigned(high);
        std::cout << AForm << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
}