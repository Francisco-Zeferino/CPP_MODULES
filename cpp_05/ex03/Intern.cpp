/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:16:31 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/25 15:56:36 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern &copy){
    *this = copy;
}

Intern &Intern::operator=(const Intern &copy){
    if(this != &copy){
        *this = copy;
    }
    return(*this);
}

Intern::~Intern(){}

AForm *Intern::createShrubbery(const std::string formName){
    return(new ShrubberyCreationForm(formName));
}

AForm *Intern::createRobot(const std::string formName){
    return(new RobotomyRequestForm(formName));
}

AForm *Intern::createPresidential(const std::string formName){
    return(new PresidentialPardonForm(formName));
}

AForm *Intern::makeForm(const std::string formName, const std::string target){
    std::string formNames[3] = {"shrubbery request", "robotomy request", "presidential request"};
    AForm *(Intern::*funcPrt[3])(const std::string target);
    int pos = -1;
    funcPrt[0] = &Intern::createShrubbery;
    funcPrt[1] = &Intern::createRobot;
    funcPrt[2] = &Intern::createPresidential;
    try{
        for(int i = 0; i < 3; i++){
            if(formNames[i] == formName)
                return((this->*funcPrt[i])(target));
        }
        if(pos == -1)
            throw InternNoFormMatchException();
    }catch(InternNoFormMatchException &e){
        std::cout << e.what();
    }
    return(NULL);
}