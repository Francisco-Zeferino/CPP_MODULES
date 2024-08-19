/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:52:13 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/19 09:21:56 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &x, T &y){
    T swapable;
    swapable = x;
    x = y;
    y = swapable;
}

template <typename T>
T min(T &x, T &y){
    return(x > y ? y : x);
}

template <typename T>
T max(T &x, T &y){
    return(x > y ? x : y);
}

#endif