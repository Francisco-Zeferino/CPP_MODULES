/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:09:38 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/18 12:28:45 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
    public :
        Intern();
        Intern(Intern &copy);
        Intern &operator=(const Intern &copy);
        ~Intern();
        class InternNoFormMatchException : public std::exception{
            public :
                virtual const char *what() const throw(){
                    return "Given form has no match!\n";
                }
        };
        AForm *makeForm(const std::string formName, const std::string target);
};

#endif