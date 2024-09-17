/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:46:05 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/17 16:01:40 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void storeData(std::string arg, std::deque<int> &dqContainer, std::vector<int> &vecContainer){
    vecContainer.push_back(atoi(arg.c_str()));
    dqContainer.push_back(atoi(arg.c_str()));
}

void sortVector(std::vector<int> &vecContainer){
    std::vector<int> min, max;
    std::vector<int>::iterator it;
    std::vector<int>::iterator tmp;
    it = vecContainer.begin();
    tmp = it++;
    if(*it < *tmp){
        min.push_back(*it);
        max.push_back(*tmp);
    }
    else{
        min.push_back(*tmp);
        max.push_back(*it);
    }
    vecContainer.erase(it);
    vecContainer.erase(tmp);
    sortVector(vecContainer);
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