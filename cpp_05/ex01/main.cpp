/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:46:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/21 17:20:46 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    Bureaucrat a(9);
    Bureaucrat b("Manel", 100);
    Form formA("Form A", 10, 150);
    Form formB("Form B", 1, 150);
    Form formC("Form C", 100, 150);
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << "---------------Test Basic Form A-------------" << std::endl;
    std::cout << a << std::endl;
    std::cout << formA << std::endl;
    a.decrementGrade(2);
    a.incrementGrade(2);
    std::cout << formA << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "---------------Test Basic Form B-------------" << std::endl;
    std::cout << b << std::endl;
    std::cout << formB << std::endl;
    b.incrementGrade(99);
    std::cout << formB << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "---------------Test Form Multiple Signs-------------" << std::endl;
    std::cout << formC << std::endl;
    formC.beSigned(b);
    std::cout << formC << std::endl;
    std::cout << formC << std::endl;
    std::cout << "----------------------------------" << std::endl;
}