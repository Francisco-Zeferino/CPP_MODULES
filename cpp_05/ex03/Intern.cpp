/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:16:31 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/19 10:25:21 by ffilipe-         ###   ########.fr       */
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
        case 0:
            std::cout << "Intern creates " << target << std::endl;
            return(new ShrubberyCreationForm(target));
        case 1:
            std::cout << "Intern creates " << target << std::endl;
            return(new RobotomyRequestForm(target));
        case 2:
            std::cout << "Intern creates " << target << std::endl;
            return(new PresidentialPardonForm(target));
        default:
            return NULL;
            break;
    }
}