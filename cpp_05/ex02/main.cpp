/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:46:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/14 12:04:18 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    Bureaucrat a(9);
    Bureaucrat b("Manel", 100);
    Form c("Form C", 10, 150);
    Form d("Form D", 1, 150);
    Form e("Form E", 100, 150);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    e.signForm(b);
    e.signForm(a);
    // d.signForm(a);
}