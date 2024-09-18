/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:46:01 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/18 12:33:35 by ffilipe-         ###   ########.fr       */
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
        }
    }

    return pairContainer;
}

template<typename T>
int checkOddEven(T container){
    int containerRem = -1;
    if(container.size() % 2 != 0){
        containerRem = container.back();
        container.pop_back();
    }
    return containerRem;
}

#endif