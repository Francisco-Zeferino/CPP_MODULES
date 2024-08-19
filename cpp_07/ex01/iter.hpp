/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 09:24:14 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/19 10:51:13 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"

template<typename T>
void iter(T *arr, int len, void(*func)(T data)){
    for(int i = 0; i < len; i++){
        func(arr[i]);
    }
}

template<typename T>
void print(T data){
    std::cout << "Array value: " << data << std::endl;
}


#endif