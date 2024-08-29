/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:03:11 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/29 09:18:58 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <exception>

template <typename T>
void easyfind(std::vector<T> tVector, int y){
    int flag = -1;
    for(int i = 0; static_cast<unsigned int>(i) < tVector.size(); i++){
        if(tVector[i] == y){
            std::cout << "Occurence found!" << std::endl;
            flag = 1;
        }
    }
    if(flag == -1)
        throw std::invalid_argument("No match found");
};

#endif