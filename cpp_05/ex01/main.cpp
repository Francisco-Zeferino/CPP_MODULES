/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:46:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/24 14:24:01 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    Bureaucrat a("Francisco",9);
    Bureaucrat b("Manel", 100);
    Bureaucrat c("Joao",1);
    Form formA("Form A", 10, 150);
    Form formB("Form B", 75, 150);
    Form formC("Form C", 100, 150);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
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
}