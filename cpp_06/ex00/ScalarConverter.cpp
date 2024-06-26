/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:27:04 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/26 16:09:11 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
}

ScalarConverter::ScalarConverter(ScalarConverter const &copy){
    *this = copy;
}

ScalarConverter::~ScalarConverter(){
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &copy){
    if (this != &copy)
        *this = copy;
    return *this;
}

ConvertType getConvertType(std::string str){
    if(str.find_last_of('.') != std::string::npos && str.find_last_of('f') != std::string::npos)
        return FLOAT;
    else if(str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
        return PSLITERAL;
    else if(str.find_last_of('.') != std::string::npos)
        return DOUBLE;
    else if(str.length() == 1 && !isdigit(str[0]))
        return CHAR;
    else if(isdigit(str[0]) || str[0] == '-')
        return INT;
    else
        return NONE;
}

void convertInt(std::string str){
    int convertedString = std::atoi(str.c_str());
    std::cout << "int: " << convertedString << std::endl;
}

void convertFloat(std::string str){
    float convertedString = std::atof(str.c_str());
    std::cout << "float: " << convertedString << std::endl;
}

void convertDouble(std::string str){
    double convertedString = std::atof(str.c_str());
    std::cout << "double: " << convertedString << std::endl;
}

void ScalarConverter::convert(std::string str){
    switch (getConvertType(str))
    {
        case INT:
            convertInt(str);
            break;
        case CHAR:
            break;
        case FLOAT:
            convertFloat(str);
            break;
        case DOUBLE:
            convertDouble(str);
            break;
        case PSLITERAL:
            break;
        default:
            break;
    }
}