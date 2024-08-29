/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:24:04 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/29 16:32:30 by ffilipe-         ###   ########.fr       */
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
        Array(const Array &copy);
        ~Array();
        Array &operator=(const Array &copy);
        T &operator[](int n) const;
        int size() const;
        class OutOfBoundsException : public std::exception{
            public :
                virtual const char *what() const throw();
        };
};

template<class T>
const char *Array<T>::OutOfBoundsException::what() const throw(){
    return("Index out of bounds!\n");
}

template<class T>
Array<T>::Array(){
    arr = NULL;
    arrSize = 0;
}

template<class T>
Array<T>::Array(unsigned int n){
    arr = new T[n];
    arrSize = n;
}

template<class T>
Array<T>::Array(const Array &copy) : arr(NULL), arrSize(0){
    *this = copy;
}

template<class T>
Array<T>::~Array(){
    delete[]arr;
}

template<class T>
Array<T> &Array<T>::operator=(const Array &copy){
    if(this != &copy)
    {
        if(this->arr && copy.arr){
            delete[] this->arr;
            this->arr = new T[copy.arrSize]; 
            for(int i = 0; i < copy.arrSize; i++)
                this->arr[i] = copy.arr[i];
            this->arrSize = copy.arrSize;
        }
    }
    return(*this);
}

template<class T>
T &Array<T>::operator[](int n) const{
    if(n >= this->arrSize || n < 0)
        throw Array<T>::OutOfBoundsException();
    else 
        return(this->arr[n]);
}

template<class T>
int Array<T>::size() const{
    return arrSize;
}

#endif