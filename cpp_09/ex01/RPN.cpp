/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- < ffilipe-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:02:16 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/11 17:58:47 by ffilipe-         ###   ########.fr       */
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

float RPN::calculate(std::string val1, std::string val2, std::string token){
    if(token == "+")
        return atoi(val1.c_str()) + atoi(val2.c_str());
    else if(token == "-")
        return atoi(val1.c_str()) - atoi(val2.c_str());
    else if(token == "*")
        return atoi(val1.c_str()) * atoi(val2.c_str());
    else if(token == "/")
        return atoi(val1.c_str()) / atoi(val2.c_str());
    else
        return -1;
}

void RPN::reversePolishNotation(){
    std::list<std::string>::iterator it;
    std::list<std::string>::iterator tmp;
    std::list<std::string>::iterator token;
    float result;
    it = rpnList.begin();
    while(it != rpnList.end()){
        tmp = it;
        tmp++;
        token = tmp;
        if(tmp != rpnList.end() && ++token != rpnList.end()){
            result = calculate(*it, *tmp, *token);
            std::cout << result << std::endl;
        }
        it++;
    }
}

void RPN::parse(std::string arg){
    std::list<std::string>::iterator it;
    size_t i;
    std::string token;
    while((i = arg.find(" ")) != std::string::npos){
        token = arg.substr(0, i);
        rpnList.push_back(token);
        arg.erase(0, i + 1);
    }
    rpnList.push_back(arg);
    reversePolishNotation();
    // it = rpnList.begin();
    // while (it != rpnList.end()) {
    //     std::cout << *it << std::endl;
    //     it++;
    // }
}