/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:48:37 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/19 11:18:19 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(){
    std::string stringArr[] = {"one", "two", "three"};
    std::cout << "Array Tests" << std::endl;
    ::iter(stringArr, 3, ::print);
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Char Tests" << std::endl;
    char charArr[] = {'a', 'b', 'c', '1'};
    ::iter(charArr, 4, ::print);
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Int Tests" << std::endl;
    int intArr[] = {1,2,3};
    ::iter(intArr, 3, ::print);
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Float Tests" << std::endl;
    float floatArr[] = {1.1,2.2,3.3};
    ::iter(floatArr, 3, ::print);
}