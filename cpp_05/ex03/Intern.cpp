/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:16:31 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/25 21:55:19 by ffilipe-         ###   ########.fr       */
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
    int pos = -1;
    try{
        for(int i = 0; i < 3; i++){
            if(formNames[i] == formName)
                pos = i;
        }
        if(pos == -1)
            throw InternNoFormMatchException();
    }catch(InternNoFormMatchException &e){
        std::cout << e.what();
    }
    switch (pos)
    {
        case 1:
            return(new ShrubberyCreationForm(target));
        case 2:
            return(new RobotomyRequestForm(target));
        case 3:
            return(new PresidentialPardonForm(target));
        default:
            return(NULL);
    }
}