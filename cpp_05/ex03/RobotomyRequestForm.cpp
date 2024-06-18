/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:12:07 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/17 14:14:38 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm",72,45){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm",72,45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(const AForm &copy){
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const AForm &copy){
    if(this != &copy){
        *this = copy;
    }
    return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const{
    if(checkRequirements(executor))
        std::cout << "BRRRRRRRRRRR . . . " << _target << " has been robotomized successfully 50% of the time" << std::endl;
    else
        std::cout << "The robotomy failed" << std::endl;
}