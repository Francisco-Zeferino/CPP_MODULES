/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:46:01 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/13 18:29:11 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_HPP
#define PMERGE_HPP
#include <iostream>
#include <deque>
#include <stack>
#include <limits>
#include <cstdlib>

class PmergeMe{
    private :
        std::deque<int> dqContainer;
        std::stack<int> stkContainer;
    public :
        void parseData(char **av);
        bool validArgument(std::string arg);
};

#endif