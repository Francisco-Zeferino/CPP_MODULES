/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:23:30 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/23 16:07:45 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cerrno>
#include <iomanip>
#include <cmath>
#include <limits>
#include <climits>

enum ConvertType{
    INT,
    CHAR,
    FLOAT,
    DOUBLE,
    PSLITERAL,
    NONE
};

class ScalarConverter{
    private :
        ScalarConverter();
        ScalarConverter(ScalarConverter const &copy);
        ~ScalarConverter();
        ScalarConverter &operator=(ScalarConverter const &copy);
    public:
        static void convert(std::string str);
};

#endif