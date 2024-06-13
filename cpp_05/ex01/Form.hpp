/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:58:00 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/13 17:16:50 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form{
    private :
        const std::string _name;
        bool _signed;
        const int _signGrade;
        const int _execGrade;
    public :
        Form();
        Form(std::string name, int signGrade, int execGrade);
        Form(Form &copy);
        ~Form();
        Form operator=(Form const &copy);
        class GradeTooHighException : public std::exception{
            public :
                virtual const char *what() const throw(){
                    return "Grade is too high!\n";
                }
        };
        class GradeTooLowException : public std::exception{
            public :
                virtual const char *what() const throw(){
                    return "Grade is too low!\n";
                }
        };
        bool beSigned(Bureaucrat &bureaucrat);
        void signForm(Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, Form const &form);

#endif