/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:26:50 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/24 14:26:19 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"), _signed(false), _signGrade(50), _execGrade(50){
    std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade){
    std::cout << "AForm name constructor called" << std::endl;
}

AForm::AForm(AForm &copy) : _signGrade(copy._signGrade), _execGrade(copy._execGrade){
    std::cout << "AForm copy constructor called" << std::endl;
    *this = copy;
}

AForm::~AForm(){
    std::cout << "AForm destructor called" << std::endl;
}

AForm &AForm::operator=(AForm const &copy){
    std::cout << "AForm assignation operator called" << std::endl;
    if(this != &copy){
        _signed = copy._signed;
    }
    return (*this);
}

bool AForm::beSigned(Bureaucrat &bureaucrat){
    try{
        if(bureaucrat.getGrade() <= _signGrade && !_signed)
            _signed = true;
        else if(bureaucrat.getGrade() > _signGrade)
            throw AForm::GradeTooLowException();
        else
            throw AForm::AFormExceptionAlreadySigned();
    }catch (GradeTooLowException &e){
        std::cout << bureaucrat.getName() << " couldn't sign " << _name << " because " << e.what();
        return false;
    }catch (AFormExceptionAlreadySigned &e){
        std::cout << bureaucrat.getName() << " couldn't sign " << _name << " because " << e.what();
        return false;
    }
    return true;
}

bool AForm::checkRequirements(Bureaucrat const &bureaucrat) const{
    try{
        if(bureaucrat.getGrade() > _signGrade)
            throw AForm::GradeTooLowException();
        else if(bureaucrat.getGrade() <= _signGrade && !_signed)
           return true;
        else
            throw AForm::AFormExceptionAlreadySigned();
    }catch (GradeTooLowException &e){
        std::cout << bureaucrat.getName() << " couldn't sign " << _name << " because " << e.what();
        return false;
    }catch (AFormExceptionAlreadySigned &e){
        std::cout << bureaucrat.getName() << " couldn't sign " << _name << " because " << e.what();
        return false;
    }
    return true;
}

std::string AForm::getName() const{
    return (_name);
}

bool AForm::getSignedStatus() const{
    return(_signed);
}

int AForm::getSignGrade() const{
    return(_signGrade);
}

int AForm::getExecGrade() const{
    return(_execGrade);
}

std::ostream &operator<<(std::ostream &os, const AForm &AForm){
    os << AForm.getName() << ", sign grade : " << AForm.getSignGrade() << " ,exec grade : " << AForm.getExecGrade() << " ,signed status : " << AForm.getSignedStatus() << std::endl;
    return os;
}