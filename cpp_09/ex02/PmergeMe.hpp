/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:46:01 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/17 20:08:49 by ffilipe-         ###   ########.fr       */
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

#endif