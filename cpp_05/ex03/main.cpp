/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:46:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/18 15:35:43 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(){
    Intern someRandomIntern;
    AForm *PRT; 
    PRT = someRandomIntern.makeForm("presidential request", "Bender");
    PRT = someRandomIntern.makeForm("shrubbery request", "Bender");
    std::cout << PRT->getSignGrade() << std::endl;
    delete PRT;
    //std::cout << rrf->getSignGrade() << std::endl;
    // Bureaucrat test1(9);
    // Bureaucrat test2("Manel", 2);
    // Bureaucrat test3("Frn", 150);
    // Bureaucrat test4("Fren", 140);
    // ShrubberyCreationForm shrubb("arvores");
    // RobotomyRequestForm robot("robodrenas");
    // PresidentialPardonForm president("president");

    // std::cout << "----------Shrubb test----------" << std::endl;
    // std::cout << shrubb;
    // std::cout << test1 << std::endl;
    // std::cout << test2 << std::endl;
    // std::cout << test3 << std::endl;
    // std::cout << test4 << std::endl;
    // shrubb.execute(test1);
    // test2.executeForm(shrubb);
    // shrubb.execute(test3);
    // shrubb.execute(test4);
    // std::cout << "-------------------------------" << std::endl;
    // std::cout << "----------Robotomy test----------" << std::endl;
    // std::cout << robot;
    // std::cout << test1 << std::endl;
    // std::cout << test2 << std::endl;
    // std::cout << test3 << std::endl;
    // std::cout << test4 << std::endl;
    // robot.execute(test1);
    // test2.executeForm(robot);
    // robot.execute(test3);
    // robot.execute(test4);
    // std::cout << "-------------------------------" << std::endl;
    // std::cout << "----------Presidential Test----------" << std::endl;
    // std::cout << president;
    // std::cout << test1 << std::endl;
    // std::cout << test2 << std::endl;
    // std::cout << test3 << std::endl;
    // std::cout << test4 << std::endl;
    // president.execute(test1);
    // test2.executeForm(president);
    // president.execute(test3);
    // president.execute(test4);
    // std::cout << "-------------------------------------" << std::endl;
}