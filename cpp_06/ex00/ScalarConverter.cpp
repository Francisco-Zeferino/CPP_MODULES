/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:27:04 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/23 17:05:58 by ffilipe-         ###   ########.fr       */
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

bool checkFloat(std::string str){
    char *end;
    strtof(str.c_str(),&end);
    if(*end == 'f' || *(end + 1) == '\0' || errno != ERANGE)
        return true;
    return false;
}

bool checkDouble(std::string str){
    char *end;
    strtod(str.c_str(), &end);
    if(*end == '\0' || errno != ERANGE)
        return true;
    return false;
}

ConvertType getConvertType(std::string str){
    if(isprint(str[0]) && !str[1] && !isdigit(str[0]))
        return CHAR;
    else if(checkFloat(str) == true)
        return DOUBLE;
    else if(checkDouble(str) == true)
        return FLOAT;
    return NONE;
}

void checkValidChar(char c){
    if(isprint(c))
        std::cout << "char: " << c << std::endl;
    else if(c >= 0 && c <= 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
}

void convertInt(std::string str){
    std::cout << "In Int" << std::endl;
    int convertedString = std::atoi(str.c_str());
    float toFloat = static_cast<float>(convertedString);
    double toDouble = static_cast<double>(convertedString);
    char toChar = static_cast<char>(convertedString);
    checkValidChar(toChar);
    std::cout << "int: " << convertedString << std::endl;
    std::cout << "float: " << toFloat << ".0f" << std::endl;
    std::cout << "double: " << toDouble << ".0" << std::endl;
}

void convertFloat(std::string str){
    std::cout << "In Float" << std::endl;
    float convertedString = std::strtof(str.c_str(), NULL);
    char toChar = static_cast<char>(convertedString);
    double toDouble = static_cast<double>(convertedString);
    int toInt = static_cast<int>(convertedString);
    checkValidChar(toChar); 
    std::cout << "int: " << toInt << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << convertedString << "f" << std::endl;
    std::cout << "double: " << toDouble << std::endl;
}

void convertDouble(std::string str){
    std::cout << "In Double" << std::endl;
    double convertedString = std::atof(str.c_str());
    char toChar = static_cast<char>(convertedString);
    float toFloat = static_cast<float>(convertedString);
    int toInt = static_cast<int>(convertedString);
    checkValidChar(toChar);
    std::cout << "int: " << toInt << std::endl;
    std::cout << "float: " << toFloat << "f" << std::endl;
    std::cout << "double: " << convertedString << std::endl;
}

void convertChar(std::string str){
    std::cout << "In Char" << std::endl;
    int toInt = static_cast<int>(str[0]);
    float toFloat = static_cast<float>(str[0]);
    double toDouble = static_cast<double>(str[0]);
    checkValidChar(str[0]);
    std::cout << "int: " << toInt << std::endl;
    std::cout << "float: " << toFloat << ".0f" << std::endl;
    std::cout << "double: " << toDouble << ".0" << std::endl;
}

void convertPsLiteral(std::string str){
    std::cout << "In PS" << std::endl;
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if(str == "-inff" || str == "-inf"){
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
    else if(str == "+inff" || str == "+inf"){
        std::cout << "float: inff" << std::endl;
        std::cout << "double: inf" << std::endl;
    }
    else{
        std::cout << "float: nan" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
}

void ScalarConverter::convert(std::string str){
    switch (getConvertType(str))
    {
        case INT:
            convertInt(str);
            break;
        case CHAR:
            convertChar(str);
            break;
        case FLOAT:
            convertFloat(str);
            break;
        case DOUBLE:
            convertDouble(str);
            break;
        case PSLITERAL:
            convertPsLiteral(str);
            break;
        default:
            break;
    }
}