/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:46:01 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/16 17:32:08 by ffilipe-         ###   ########.fr       */
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

class PmergeMe{
    private :
        std::deque<int> dqContainer;
        std::vector<int> vecContainer;
        std::vector<std::pair<int, int> > vectorPairs;
        std::deque<std::pair<int, int> > dequePairs;
        int stragglerVector;
        int stragglerDeque;
        bool odd;
        bool validArgument(std::string arg);
        void storeData(std::string arg);
        void setupAlgorithm();
        void pairSetup();
    public :
        void parseData(char **av);
};

#endif