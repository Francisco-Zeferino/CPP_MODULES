/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 22:06:28 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/17 14:26:31 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(100){
}

Bureaucrat::Bureaucrat(int grade) : _name("Default"){
    try {
        if(grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if(grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else{
            std::cout << "Bureaucrat default constructor called" << std::endl;
            _grade = grade;
        }
    }
    catch (GradeTooHighException &e){
        std::cout << e.what();
    }
    catch (GradeTooLowException &e){
        std::cout << e.what();
    }
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
    std::cout << "Bureaucrat name constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy){
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = copy;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat Bureaucrat::operator=(Bureaucrat const &copy){
    std::cout << "Bureaucrat assignation operator called" << std::endl;
    if(this != &copy){
        _grade = copy._grade;
    }
    return (*this);
}

void Bureaucrat::incrementGrade(int amount){
    try {
        if((_grade - amount) < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            _grade -= amount;
    }
    catch (GradeTooHighException &e) {
        std::cout << e.what();
    }
}

void Bureaucrat::decrementGrade(int amount){
    try {
        if((_grade + amount) > 150)
            throw Bureaucrat::GradeTooLowException();
        else
            _grade += amount;
    }
    catch (GradeTooLowException &e) {
        std::cout << e.what();
    }
}

void Bureaucrat::executeForm(AForm const &form){
    if(_grade > form.getExecGrade())
        std::cout << "Cant execute form " << form.getName() << " because grade is too low!" << std::endl;
    else
        form.execute(*this);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat){
    os << bureaucrat.getName() << ", bureaucrat grade, " << bureaucrat.getGrade();
    return os;
}

int Bureaucrat::getGrade() const{
    return (_grade);
}

std::string Bureaucrat::getName() const{
    return (_name);
}
