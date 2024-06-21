/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:46:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/21 15:17:20 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    Bureaucrat *failA = new Bureaucrat("Test A",-1);
    delete failA;
    Bureaucrat *failB = new Bureaucrat(151);
    delete failB;
    Bureaucrat *a = new Bureaucrat("Test B",6);
    Bureaucrat *b = new Bureaucrat("Test B",145);
    std::cout << "---------------Test A-------------" << std::endl;
    std::cout << *a << std::endl;
    a->decrementGrade(5);
    std::cout << *a << std::endl;
    a->decrementGrade(1);
    std::cout << *a << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "---------------Test B-------------" << std::endl;
    std::cout << *b << std::endl;
    b->incrementGrade(9);
    std::cout << *b << std::endl;
    b->incrementGrade(1);
    std::cout << *b << std::endl;
    std::cout << "----------------------------------" << std::endl;
    delete a;
    delete b;
}