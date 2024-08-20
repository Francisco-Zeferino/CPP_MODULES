/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:46:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/20 15:55:15 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    std::cout << "----------Sign Grade High And Low Fail--------" << std::endl;
    try{
        Form formFailHigh("Form C", -1, 140);
    }
    catch(Form::GradeTooHighException &e){
        std::cout << "Exception : " << e.what();
    }
    try{
        Form formFailHigh("Form C", 600, 13);
    }
    catch(Form::GradeTooLowException &e){
        std::cout << "Exception : " << e.what();
    }
    std::cout << "----------------------------------" << std::endl;
    std::cout << "----------Exec Grade High And Low Fail--------" << std::endl;
    try{
        Form formFailLow("Fail", 10, 500);
    }
    catch(Form::GradeTooLowException &e){
        std::cout << "Exception : " << e.what();
    }
    try{
        Form formFailLow("Fail", 10, -10);
    }
    catch(Form::GradeTooHighException &e){
        std::cout << "Exception : " << e.what();
    }
    std::cout << "----------------------------------" << std::endl;
    Bureaucrat a("Francisco",9);
    Bureaucrat b("Manel", 100);
    Bureaucrat c("Joao",1);
    Form formA("Form A", 10, 150);
    Form formB("Form B", 75, 150);
    Form formC("Form B", 75, 150);
    Form formD("Form D", 10, 150);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << "---------------Test Sign Form A-------------" << std::endl;
    std::cout << a << std::endl;
    std::cout << formA << std::endl;
    a.signForm(formA);
    std::cout << formA << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "---------------Test Sign Form B-------------" << std::endl;
    std::cout << b << std::endl;
    std::cout << formB << std::endl;
    b.signForm(formB);
    b.incrementGrade(50);
    b.signForm(formB);
    std::cout << formB << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "---------------Test Form Multiple Signs-------------" << std::endl;
    std::cout << formC << std::endl;
    std::cout << c << std::endl;
    c.signForm(formC);
    a.signForm(formC);
    formC.beSigned(b);
    std::cout << formC << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "---------------Test Sign Form Fail-------------" << std::endl;
    std::cout << a << std::endl;
    std::cout << formD << std::endl;
    a.decrementGrade(10);
    a.signForm(formD);
    std::cout << formD << std::endl;
    std::cout << "----------------------------------" << std::endl;
}