/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- < ffilipe-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:03:18 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/11 17:41:29 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <list>
#include <iostream>
#include <cstring>
#include <iterator>
#include <stdlib.h>

class RPN{
    private:
        std::list<std::string> rpnList;
        std::string str;
    public:
        RPN();
        RPN(const RPN &copy);
        ~RPN();
        RPN &operator=(const RPN &copy);
        void parse(std::string arg);
        void reversePolishNotation();
        float calculate(std::string val1, std::string val2, std::string token);
};

#endif