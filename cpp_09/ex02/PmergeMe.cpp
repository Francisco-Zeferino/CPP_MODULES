/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:46:05 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/16 18:34:04 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void PmergeMe::storeData(std::string arg){
    vecContainer.push_back(atoi(arg.c_str()));
    dqContainer.push_back(atoi(arg.c_str()));
}

void PmergeMe::setupAlgorithm(){
    if(vecContainer.size() % 2 == 0)
        odd = false;    
    else{
        odd = true;
        stragglerVector = vecContainer.back();
        stragglerDeque = dqContainer.back();
        vecContainer.pop_back();
        dqContainer.pop_back();
    }
}

void PmergeMe::pairSetup(){
    std::vector<int>::iterator it;
    it = vecContainer.begin();
    while(it != vecContainer.end()){
        vectorPairs.push_back(std::make_pair(*it, *++it));
        it++;   
    }
    std::cout << stragglerVector << std::endl;
}

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
    storeData(arg);
    return true;
}

void PmergeMe::parseData(char **av){
    int i = 1;
    std::vector<int>::iterator it;
    std::deque<int>::iterator dqIt;
    while(av[i]){
        if(!validArgument(static_cast<std::string>(av[i])))
            return ;
        i++;
    }
    setupAlgorithm();
    pairSetup();
    // it = vecContainer.begin();
    // dqIt = dqContainer.begin();
    // while(it != vecContainer.end()){
    //     std::cout << "Vector : " << *it << "\t";
    //     it++;
    // }
    // std::cout << std::endl;
    // while(dqIt != dqContainer.end()){
    //     std::cout << "Deque: " << *dqIt << '\t';
    //     dqIt++;
    // }
}