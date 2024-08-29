/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:55:09 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/29 09:47:47 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
    try{
        std::vector<int> numbers;
        numbers.push_back(10);
        numbers.push_back(1);
        numbers.push_back(6);
        numbers.push_back(11);
        numbers.push_back(50);
        easyfind(numbers, 10);
    }catch(std::invalid_argument &e){
        std::cout << e.what() << std::endl;
    }
    try{
        std::vector<int> numberF;
        numberF.push_back(-10);
        numberF.push_back(-1);
        numberF.push_back(-6);
        numberF.push_back(-11);
        numberF.push_back(-50);
        easyfind(numberF, -18);

    }catch(std::invalid_argument &e){
        std::cout << e.what() << std::endl;
    }
}