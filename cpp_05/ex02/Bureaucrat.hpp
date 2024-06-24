/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 22:06:24 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/24 14:30:32 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdlib.h>
#include "AForm.hpp"

class AForm;

class Bureaucrat{
    private :
        const std::string _name;
        int _grade;
    public :
        Bureaucrat();
        Bureaucrat(int grade);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat &copy);
        ~Bureaucrat();
        Bureaucrat operator=(Bureaucrat const &copy);
        class GradeTooHighException : public std::exception{
            public :
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public :
                virtual const char *what() const throw();
        };
        void incrementGrade(int amount);
        void decrementGrade(int amount);
        int getGrade() const;
        std::string getName() const;
        void signForm(AForm &form);
        void executeForm(AForm const &form);
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif