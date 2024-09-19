/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:46:05 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/19 17:32:49 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void storeData(std::string arg, std::deque<int> &dqContainer, std::vector<int> &vecContainer){
    vecContainer.push_back(atoi(arg.c_str()));
    dqContainer.push_back(atoi(arg.c_str()));
}

void selectMaxMinVector(std::vector<int> &vecContainer, std::vector<int> &min, std::vector<int> &max){
    std::vector<int>::iterator it;
    std::vector<std::pair<int, int > > vectorPairs;
    std::vector<std::pair<int, int > >::iterator pit;

    vectorPairs = setPairs(vecContainer, vectorPairs);
    pit = vectorPairs.begin();
    while(pit != vectorPairs.end()){
        min.push_back(pit->first);
        if (pit->second != std::numeric_limits<int>::max()) {
            max.push_back(pit->second);
        }
        pit++;
    }
}

void sortVector(std::vector<int> &vecContainer){
    std::vector<int> min, max;
    std::vector<int>::iterator it;
    std::vector<int>::iterator tmp;
    if(vecContainer.size() <= 1)
        return ;
    selectMaxMinVector(vecContainer, min, max);
    sortVector(min);
    vecContainer.clear();
    vecContainer.insert(vecContainer.end(), min.begin(), min.end());
    for(size_t i = 0; i < max.size(); i++){
        std::vector<int>::iterator it = std::upper_bound(min.begin(), min.end(), max[i]);
        min.insert(it, max[i]);
    }
    vecContainer = min;
}

void selectMaxMinDeque(std::deque<int> &dqContainer, std::deque<int> &min, std::deque<int> &max){
    std::deque<int>::iterator it;
    std::deque<std::pair<int, int > > dqPairs;
    std::deque<std::pair<int, int > >::iterator pit;

    dqPairs = setPairs(dqContainer, dqPairs);
    pit = dqPairs.begin();
    while(pit != dqPairs.end()){
        min.push_back(pit->first);
        if (pit->second != std::numeric_limits<int>::max()) {
            max.push_back(pit->second);
        }
        pit++;
    }
}

void sortDeque(std::deque<int> &dqContainer){
    std::deque<int> min, max;
    std::deque<int>::iterator it;
    std::deque<int>::iterator tmp;
    if(dqContainer.size() <= 1)
        return ;
    selectMaxMinDeque(dqContainer, min, max);
    sortDeque(min);
    dqContainer.clear();
    dqContainer.insert(dqContainer.end(), min.begin(), min.end());
    for(size_t i = 0; i < max.size(); i++){
        std::deque<int>::iterator it = std::upper_bound(min.begin(), min.end(), max[i]);
        min.insert(it, max[i]);
    }
    dqContainer = min;
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
    std::vector<int>::iterator vecit;
    std::deque<int>::iterator dqit;
    while(av[i]){
        if(!validArgument(static_cast<std::string>(av[i]), dqContainer, vecContainer))
            return ;
        i++;
    }
    sortVector(vecContainer);
    sortDeque(dqContainer);
    dqit = dqContainer.begin();
    while(dqit != dqContainer.end()){
        std::cout << *dqit << " ";
        dqit++;
    }
    std::cout << std::endl;
}