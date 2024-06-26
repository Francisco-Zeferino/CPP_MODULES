/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:39:41 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/26 15:40:52 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv){
    if (argc != 2)
        std::cout << "Error: Invalid number of arguments" << std::endl;
    else
        ScalarConverter::convert(argv[1]);
    return 0;
}