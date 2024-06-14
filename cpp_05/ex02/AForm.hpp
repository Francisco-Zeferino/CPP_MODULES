/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:26:52 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/14 14:26:53 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <exception>

class AForm{
    private :
        const std::string _name;
        std::string _errorMessage;
        bool _signed;
        const int _signGrade;
        const int _execGrade;
    public :
        AForm();
        AForm(std::string name, int signGrade, int execGrade);
        AForm(AForm &copy);
        ~AForm();
        AForm &operator=(AForm const &copy);
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
        class AFormException : public std::exception{
            public :
                virtual const char *what() const throw(){
                    return "AForm is already signed\n";
                }
        };
        bool beSigned(Bureaucrat &bureaucrat);
        bool checkRequirements(Bureaucrat &bureaucrat);
        void signAForm(Bureaucrat &bureaucrat);
        virtual void execute(Bureaucrat const &executor) const = 0;
        std::string getName() const;
        bool getSignedStatus() const;
        int getSignGrade() const;
        int getExecGrade() const;
};

std::ostream &operator<<(std::ostream &os, AForm const &AForm);

#endif