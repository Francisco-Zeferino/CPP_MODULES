/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:46:05 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/13 18:29:42 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool PmergeMe::validArgument(std::string arg){
    int i = 0;
    while (arg[i]){
        if(!isdigit(arg[i])){
            std::cerr << "Invalid argument: " << arg << std::endl;
            return false;
        }
        if(atol(arg.c_str()) > std::numeric_limits<int>::max()){
            std::cerr << "Integer overflow: " << arg << std::endl;
            return false;
        }
        i++;
    }
    return true;
}

void PmergeMe::parseData(char **av){
    int i = 1;
    while(av[i]){
        if(!validArgument(static_cast<std::string>(av[i])))
            return ;
        i++;
    }
}