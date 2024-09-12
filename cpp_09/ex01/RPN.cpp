/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:02:16 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/12 15:44:24 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN &copy){
    *this = copy;
}

RPN::~RPN(){}

RPN &RPN::operator=(const RPN &copy){
    if(this != &copy){}
    return(*this);
}

std::list<std::string>::iterator RPN::findToken(std::list<std::string>::iterator it){
    while(it != rpnList.end()){
        if(*it == "+" || *it == "-" || *it == "/" || *it == "*")
            return it;
        it++;
    }
    return rpnList.end();
}

float RPN::calculate(std::string val1, std::string val2, std::string token){
    if(token == "+")
        return atoi(val1.c_str()) + atoi(val2.c_str());
    else if(token == "-")
        return atoi(val1.c_str()) - atoi(val2.c_str());
    else if(token == "*")
        return atoi(val1.c_str()) * atoi(val2.c_str());
    else if(token == "/"){
        if(val2 == "0")
            throw std::invalid_argument("Can't divide by zero\n");
        return atoi(val1.c_str()) / atoi(val2.c_str());
    }
    else
        return -1;
}

void RPN::reversePolishNotation(){
    std::list<std::string>::iterator it;
    std::list<std::string>::iterator tmp;
    std::list<std::string>::iterator token;
    int result;
    it = rpnList.begin();
    tmp = it;
    token = findToken(it);
    result = calculate(*it, *++tmp, *token);
    convertedResult << result;
    while(it != rpnList.end()){
        it = token;
        if(token != rpnList.end() && ++it != rpnList.end()){
            try{
                token = findToken(it);
                result = calculate(convertedResult.str(), *it, *token);
                convertedResult.str("");
                convertedResult << result;    
            }catch(std::exception &e){
                std::cout << e.what();
                return;
            }
        }
    }
    std::cout << result << std::endl;
}

bool validToken(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

void RPN::parse(std::string arg){
    size_t i;
    std::string token;
    while((i = arg.find(" ")) != std::string::npos){
        token = arg.substr(0, i);
        std::find_if(arg.begin(), arg.end(), validToken);
        if(token.size() < 2 && (validToken(token[0]) || isdigit(token[0]))){
            rpnList.push_back(token);
            arg.erase(0, i + 1);
        }
        else
            return;
    }
    if(arg.size() < 2 && (validToken(arg[0]) || isdigit(arg[0]))){
        rpnList.push_back(arg);
        reversePolishNotation();
    }
    else{
        return;
    }
}