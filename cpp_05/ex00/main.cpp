/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:46:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/17 09:51:34 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    Bureaucrat a("Test A",145);
    Bureaucrat b("Test B",10);

    std::cout << "---------------Test A-------------" << std::endl;
    std::cout << a << std::endl;
    a.decrementGrade(5);
    std::cout << a << std::endl;
    a.decrementGrade(1);
    std::cout << a << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "---------------Test B-------------" << std::endl;
    std::cout << b << std::endl;
    b.incrementGrade(9);
    std::cout << b << std::endl;
    b.incrementGrade(1);
    std::cout << b << std::endl;
    std::cout << "----------------------------------" << std::endl;
}