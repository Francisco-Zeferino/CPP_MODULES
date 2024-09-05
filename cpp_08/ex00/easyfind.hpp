/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:03:11 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/05 10:25:13 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>
#include <list>
#include <deque>

template <typename T>
void easyfind(T containerT, int y){
    typename T::iterator it;
    it = std::find(containerT.begin(), containerT.end(), y);
    if(it == containerT.end())
        throw std::out_of_range("No match found!");
    else
        std::cout << "Occurence found!" << std::endl;
};

#endif