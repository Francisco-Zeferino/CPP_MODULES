/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:57:58 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/18 11:42:28 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _signed(false), _signGrade(50), _execGrade(50){
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade){
    std::cout << "Form name constructor called" << std::endl;
}

Form::Form(Form &copy) : _signGrade(copy._signGrade), _execGrade(copy._execGrade){
    std::cout << "Form copy constructor called" << std::endl;
    *this = copy;
}

Form::~Form(){
    std::cout << "Form destructor called" << std::endl;
}

Form Form::operator=(Form const &copy){
    std::cout << "Form assignation operator called" << std::endl;
    if(this != &copy){
        _signed = copy._signed;
    }
    return (*this);
}

bool Form::beSigned(Bureaucrat &bureaucrat){
    try{
        if(bureaucrat.getGrade() <= _signGrade && !_signed)
            _signed = true;
        else if(bureaucrat.getGrade() >= _signGrade)
            throw Form::GradeTooLowException();
        else
            throw Form::FormException();
    }catch (GradeTooLowException &e){
        std::cout << bureaucrat.getName() << " couldn't sign " << _name << " because " << e.what();
        return false;
    }catch (FormException &e){
        std::cout << bureaucrat.getName() << " couldn't sign " << _name << " because " << e.what();
        return false;
    }
    return true;
}

void Form::signForm(Bureaucrat &bureaucrat){
    if(beSigned(bureaucrat))
            std::cout << bureaucrat.getName() << " signed " << _name << std::endl;
}

std::string Form::getName() const{
    return (_name);
}

bool Form::getSignedStatus() const{
    return(_signed);
}

int Form::getSignGrade() const{
    return(_signGrade);
}

int Form::getExecGrade() const{
    return(_execGrade);
}

std::ostream &operator<<(std::ostream &os, const Form &form){
    os << form.getName() << ", sign grade : " << form.getSignGrade() << " ,exec grade : " << form.getExecGrade() << " ,signed status : " << form.getSignedStatus();
    return os;
}