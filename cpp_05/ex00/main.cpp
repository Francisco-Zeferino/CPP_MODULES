/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:46:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/20 15:41:58 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    try{
        Bureaucrat failA("Test A",-1);
        std::cout << failA << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException &e){
        std::cout << "Exception : " << e.what();
    }
    try{
        Bureaucrat failB("Fail B",151);
        std::cout << failB << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e){
        std::cout <<"Exception : " << e.what();
    }
    Bureaucrat a("Test A",6);
    Bureaucrat b("Test B",145);
    std::cout << "---------------Test A-------------" << std::endl;
    std::cout << a << std::endl;
    a.decrementGrade(5);
    std::cout << a << std::endl;
    a.decrementGrade(1);
    std::cout << a << std::endl;
    a.incrementGrade(10);
    std::cout << a << std::endl;
    a.incrementGrade(2);
    std::cout << a << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "---------------Test B-------------" << std::endl;
    std::cout << b << std::endl;
    b.incrementGrade(9);
    std::cout << b << std::endl;
    b.incrementGrade(1);
    b.decrementGrade(332);
    std::cout << b << std::endl;
    std::cout << "----------------------------------" << std::endl;
}