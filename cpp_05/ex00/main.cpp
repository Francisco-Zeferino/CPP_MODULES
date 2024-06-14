/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:46:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/14 12:54:21 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    Bureaucrat a(11);
    Bureaucrat b;

    std::cout << a << std::endl;
    a.decrementGrade(5);
    std::cout << a << std::endl;
    a.incrementGrade(16);
    std::cout << a << std::endl;
}