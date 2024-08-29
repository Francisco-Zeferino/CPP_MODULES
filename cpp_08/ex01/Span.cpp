/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:03:38 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/29 19:20:38 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
}

Span::Span(unsigned int N){
    this->N = N;
}

Span::Span(Span &copy){

}

Span &Span::operator=(const Span &copy){
}

const char *Span::NumberOverflowException::what() const throw(){
    return("Cannot store any more elements\n");
}

void Span::addNumber(){
    srand(time(NULL));
    if(numVector.size() < N)
        numVector.push_back(rand() % 100);
    else
        throw NumberOverflowException();
}