/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:02:16 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/19 17:07:22 by ffilipe-         ###   ########.fr       */
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

bool validToken(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

std::list<std::string>::iterator RPN::findToken(std::list<std::string>::iterator it){
    while(it != rpnList.end()){
        if(*it == "+" || *it == "-" || *it == "/" || *it == "*")
            return it;
        it++;
    }
    return rpnList.end();
}

void RPN::calculate(std::list<int> &nums, std::string token){
    int result = 0;
    int val2 = nums.back();
    nums.pop_back();
    int val1 = nums.back();
    nums.pop_back();
    if(token == "+")
        result =  val1 + val2;
    if(token == "-")
        result =  val1 - val2;
    if(token == "*")
        result =  val1 * val2;
    if(token == "/"){
        if(val2 == 0)
            throw std::invalid_argument("Division by 0");
        result =  val1 / val2;
    }
    nums.push_back(result);
}

void RPN::reversePolishNotation(){
    std::list<std::string>::iterator token;
    std::list<int> nums;
    while(rpnList.size() >= 1){
        if(!validToken((*(rpnList.begin()))[0]))
            nums.push_back(atoi((*(rpnList.begin())).c_str()));
        else
            calculate(nums ,*rpnList.begin());
        rpnList.pop_front();
    }
    if(nums.size() != 1)
        throw std::invalid_argument("Invalid equation");
    std::cout << nums.front() << std::endl;
}

void RPN::parse(std::string arg){
    size_t i;
    std::string token;
    if(arg.size() < 2){
        std::cout << "Invalid arguments" << std::endl;
        return ;
    }
    while((i = arg.find(" ")) != std::string::npos){
        token = arg.substr(0, i);
        std::find_if(arg.begin(), arg.end(), validToken);
        if(token.size() < 2 && (validToken(token[0]) || isdigit(token[0]))){
            rpnList.push_back(token);
            arg.erase(0, i + 1);
        }
        else{
            std::cout << "Invalid arguments" << std::endl;
            return;
        }
    }
    if(arg.size() < 2 && (validToken(arg[0]) || isdigit(arg[0]))){
        rpnList.push_back(arg);
        try{
            reversePolishNotation();
        }catch(std::exception &e){
            std::cout << e.what() << std::endl;
            return ;
        }
    }
    else{
        std::cout << "Invalid arguments" << std::endl;
        return;
    }
}