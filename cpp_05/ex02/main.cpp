/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:46:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/20 17:31:55 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
    Bureaucrat zeca("Zeca",9);
    Bureaucrat manel("Manel", 2);
    Bureaucrat franc("Francisco", 150);
    Bureaucrat joao("Joao", 140);
    ShrubberyCreationForm shrubb("arvores");
    RobotomyRequestForm robot("robodrenas");
    PresidentialPardonForm president("president");
    std::cout << "----------Shrubb test----------" << std::endl;
    std::cout << shrubb;
    std::cout << zeca << std::endl;
    std::cout << manel << std::endl;
    std::cout << franc << std::endl;
    std::cout << joao << std::endl;
    shrubb.execute(zeca);
    zeca.signForm(shrubb);
    shrubb.execute(zeca);
    manel.executeForm(shrubb);
    shrubb.execute(franc);
    shrubb.execute(joao);
    std::cout << shrubb;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "----------Robotomy test----------" << std::endl;
    std::cout << robot;
    std::cout << zeca << std::endl;
    std::cout << manel << std::endl;
    std::cout << franc << std::endl;
    std::cout << joao << std::endl;
    robot.execute(zeca);
    manel.executeForm(robot);
    manel.signForm(robot);
    robot.execute(franc);
    robot.execute(joao);
    zeca.executeForm(robot);
    manel.executeForm(robot);
    std::cout << "-------------------------------" << std::endl;
    std::cout << "----------Presidential Test----------" << std::endl;
    std::cout << president;
    std::cout << zeca << std::endl;
    std::cout << manel << std::endl;
    std::cout << franc << std::endl;
    std::cout << joao << std::endl;
    president.execute(zeca);
    manel.executeForm(president);
    president.execute(franc);
    president.execute(joao);
    zeca.signForm(president);
    manel.executeForm(president);
    std::cout << "-------------------------------------" << std::endl;
}