/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:52:23 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/24 14:38:17 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), fileName(target + "_shrubbery"){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : AForm(copy){
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy){
    if(this != &copy){
        this->fileName = copy.fileName;
    }
    return(*this);
}

void ShrubberyCreationForm::asciiToFile() const{
    std::ofstream asciiFile(fileName.c_str());
    asciiFile << "       _-_" << std::endl;
    asciiFile << "    /~~   ~~\\" << std::endl;
    asciiFile << " /~~         ~~\\" << std::endl;
    asciiFile << "{               }" << std::endl;
    asciiFile << " \\\\  _-     -_  /" << std::endl;
    asciiFile << "   ~  \\\\ //  ~" << std::endl;
    asciiFile << "_- -   | | _- _" << std::endl;
    asciiFile << "  _ -  | |   -_" << std::endl;
    asciiFile << "      // \\" << std::endl;
    asciiFile.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
    if(checkRequirements(executor) && executor.getGrade() <= getExecGrade())
        asciiToFile();
    else
        std::cout << executor.getName() << " can't execute because exec grade is too low!" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}