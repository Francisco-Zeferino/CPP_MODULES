/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 22:06:28 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/09 22:14:19 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name){
    std::cout << "Bureaucrat name constructor called" << std::endl;
    this->_name = name;
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
        _name = copy._name;
        grade = copy.grade;
    }
    return (*this);
}

void Bureaucrat::incrementGrade(){
    grade--;
}

void Bureaucrat::decrementGrade(){
    grade++;
}

int Bureaucrat::getGrade(){
    return (grade);
}

std::string Bureaucrat::getName(){
    return (_name);
}

