/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:27:04 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/07/11 12:24:32 by ffilipe-         ###   ########.fr       */
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
    float toFloat = static_cast<float>(convertedString);
    double toDouble = static_cast<double>(convertedString);
    char toChar = static_cast<char>(convertedString);
    std::cout << "char: " << toChar << std::endl;
    std::cout << "int: " << convertedString << std::endl;
    std::cout << "float: " << toFloat << ".0f" << std::endl;
    std::cout << "double: " << toDouble << ".0" << std::endl;
}

void convertFloat(std::string str){
    float convertedString = std::atof(str.c_str());
    char toChar = static_cast<char>(convertedString);
    double toDouble = static_cast<double>(convertedString);
    int toInt = static_cast<int>(convertedString);
    std::cout << "char: " << toChar << std::endl;
    std::cout << "int: " << toInt << std::endl;
    std::cout << "float: " << convertedString << "f" << std::endl;
    std::cout << "double: " << toDouble << std::endl;
}

void convertDouble(std::string str){
    double convertedString = std::atof(str.c_str());
    char toChar = static_cast<char>(convertedString);
    float toFloat = static_cast<float>(convertedString);
    int toInt = static_cast<int>(convertedString);
    std::cout << "char: " << toChar << std::endl;
    std::cout << "int: " << toInt << std::endl;
    std::cout << "float: " << toFloat << "f" << std::endl;
    std::cout << "double: " << convertedString << std::endl;
}

void convertChar(std::string str){
    int toInt = static_cast<int>(str[0]);
    float toFloat = static_cast<float>(str[0]);
    double toDouble = static_cast<double>(str[0]);
    std::cout << "char: " << str << std::endl;
    std::cout << "int: " << toInt << std::endl;
    std::cout << "float: " << toFloat << ".0f" << std::endl;
    std::cout << "double: " << toDouble << ".0" << std::endl;
}

void convertPsLiteral(std::string str){
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