/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:58:00 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/21 17:20:01 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <exception>

class Form{
    private :
        const std::string _name;
        std::string _errorMessage;
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
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public :
                virtual const char *what() const throw();
        };
        class FormException : public std::exception{
            public :
                virtual const char *what() const throw();
        };
        bool beSigned(Bureaucrat &bureaucrat);
        std::string getName() const;
        bool getSignedStatus() const;
        int getSignGrade() const;
        int getExecGrade() const;
};

std::ostream &operator<<(std::ostream &os, Form const &form);

#endif