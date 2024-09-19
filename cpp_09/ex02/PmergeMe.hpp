/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:46:01 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/19 20:53:02 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_HPP
#define PMERGE_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <limits>
#include <cstdlib>
#include <utility>
#include <ctime>
#include <bits/stdc++.h>

void parseData(char **av);
void sortVector(std::vector<int> &vecContainer);
void storeData(std::string arg, std::deque<int> &dqContainer, std::vector<int> &vecContainer);
bool validArgument(std::string arg, std::deque<int> &dqContainer, std::vector<int> &vecContainer);

template<typename T, typename P>
P setPairs(T container, P pairContainer){
    typename T::iterator it = container.begin();
    while (it != container.end()) {
        typename T::iterator first = it;
        ++it;
        if (it != container.end()) {
            pairContainer.push_back(std::make_pair(*first, *it));
            ++it;
        } else {
            pairContainer.push_back(std::make_pair(*first, std::numeric_limits<int>::max()));
        }
    }
    return pairContainer;
}

template<typename T>
void showData(T container){
    typename T::iterator it;
    for(it = container.begin(); it != container.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

#endif