/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:46:05 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/17 20:09:44 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void storeData(std::string arg, std::deque<int> &dqContainer, std::vector<int> &vecContainer){
    vecContainer.push_back(atoi(arg.c_str()));
    dqContainer.push_back(atoi(arg.c_str()));
}

void selectMaxMin(std::vector<int> &vecContainer, std::vector<int> &min, std::vector<int> &max){
    (void)min;
    (void)max;
    std::vector<int>::iterator it;
    std::vector<int>::iterator tmp;
    std::vector<std::pair<int, int > > vectorPairs;
    vectorPairs = setPairs(vecContainer, vectorPairs);
}

void sortVector(std::vector<int> &vecContainer){
    std::vector<int> min, max;
    selectMaxMin(vecContainer, min, max);
    //sortVector(min);
}

bool validArgument(std::string arg, std::deque<int> &dqContainer, std::vector<int> &vecContainer){
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
    storeData(arg, dqContainer, vecContainer);
    return true;
}

void parseData(char **av){
    int i = 1;
    std::deque<int> dqContainer;
    std::vector<int> vecContainer;
    std::vector<std::pair<int, int> >::iterator it;
    while(av[i]){
        if(!validArgument(static_cast<std::string>(av[i]), dqContainer, vecContainer))
            return ;
        i++;
    }
    sortVector(vecContainer);
}