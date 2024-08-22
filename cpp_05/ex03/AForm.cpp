/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:26:50 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/22 11:36:47 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"), _signed(false), _signGrade(50), _execGrade(50){
    std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade){
    if(_signGrade < 1 || _execGrade < 1)
        throw AForm::GradeTooHighException();
    else if(_signGrade > 150 || _execGrade > 150)
        throw AForm::GradeTooLowException();
    else{
        std::cout << "Form name constructor called" << std::endl;
    }
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
        else if(bureaucrat.getGrade() > _execGrade)
            throw AForm::AFormExceptionExecGrade();
        else if(!_signed)
            throw AForm::AFormExceptionNotSigned();
        else if(bureaucrat.getGrade() <= _signGrade && _signed)
            return true;
        else
            throw AForm::AFormExceptionAlreadySigned();
    }catch (GradeTooLowException &e){
        std::cout << bureaucrat.getName() << " couldn't sign " << _name << " because " << e.what();
        return false;
    }catch (AFormExceptionAlreadySigned &e){
        std::cout << bureaucrat.getName() << " couldn't sign " << _name << " because " << e.what();
        return false;
    }catch(AFormExceptionExecGrade &e){
        std::cout << bureaucrat.getName() << " couldn't execute " << _name << " because " << e.what();
        return false;
    }catch (AFormExceptionNotSigned &e){
        std::cout << bureaucrat.getName() << " couldn't execute " << _name << " because " << e.what();
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

const char *AForm::GradeTooHighException::what() const throw(){
    return "Grade is too high!\n";
}

const char *AForm::GradeTooLowException::what() const throw(){
    return "Grade is too low!\n";
}

const char *AForm::AFormExceptionExecGrade::what() const throw(){
    return "ExecGrade is too low!\n";
}

const char *AForm::AFormExceptionAlreadySigned::what() const throw(){
    return "Form is already signed\n";
}

const char *AForm::AFormExceptionNotSigned::what() const throw(){
    return "Form is not signed\n";
}

std::ostream &operator<<(std::ostream &os, const AForm &AForm){
    os << AForm.getName() << ", sign grade : " << AForm.getSignGrade() << " ,exec grade : " << AForm.getExecGrade() << " ,signed status : " << AForm.getSignedStatus() << std::endl;
    return os;
}