/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:24:04 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/20 10:26:26 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdlib.h>
#include <exception>

template<class T>
class Array{
    private :
        T *arr;
        int arrSize;
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &copy);
        Array &operator=(const Array &copy);
        T &operator[](int n);
        T size();
        class OutOfBoundsException : public std::exception{
            public :
                virtual const char *what() const throw(){
                    return("Index out of bounds"); 
                }
        };
};

template<class T>
Array<T>::Array(){
    arr = new T;
    arrSize = 0;
}

template<class T>
Array<T>::Array(unsigned int n){
    arr = new T[n];
    arrSize = n;
}

template<class T>
Array<T>::Array(Array const &copy){
    if(this != copy){
        delete[] this->arr;
        this->arr = new T[copy.size]; 
        for(int i = 0; i < copy.arrSize; i++)
            this->arr[i] = copy.arr[i];
        this->arrSize = copy.arrSize;
    }
}

template<class T>
Array<T> &Array<T>::operator=(const Array &copy){
    if(this != copy){
        delete[] this->arr;
        this->arr = new T[copy.size]; 
        for(int i = 0; i < copy.arrSize; i++)
            this->arr[i] = copy.arr[i];
        this->arrSize = copy.arrSize;
    }
}

template<class T>
T &Array<T>::operator[](int n){
    try{
        if(n > this->arrSize || n < 0)
            throw Array<T>::OutOfBoundsException();    
    }
    catch(OutOfBoundsException &e){
        std::cout << e.what();
        exit(0);
    }
    return(this->arr[n]);
}

template<class T>
T Array<T>::size(){
    int i = 0;
    while(this->arr)
        i++;
    return i;
}

#endif