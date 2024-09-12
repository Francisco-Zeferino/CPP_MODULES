/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:03:18 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/12 14:49:41 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <list>
#include <iostream>
#include <cstring>
#include <iterator>
#include <stdlib.h>
#include <bits/stdc++.h> 
#include <exception>

class RPN{
    private:
        std::list<std::string> rpnList;
        std::string str;
        std::stringstream convertedResult;
    public:
        RPN();
        RPN(const RPN &copy);
        ~RPN();
        RPN &operator=(const RPN &copy);
        void parse(std::string arg);
        void reversePolishNotation();
        std::list<std::string>::iterator findToken(std::list<std::string>::iterator it);
        float calculate(std::string val1, std::string val2, std::string token);
        bool validString(std::string tkn);
};

#endif