/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:46:01 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/17 15:54:26 by ffilipe-         ###   ########.fr       */
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

#endif