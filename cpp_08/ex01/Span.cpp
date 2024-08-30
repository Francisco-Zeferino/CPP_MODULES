/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- < ffilipe-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:03:38 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/30 17:48:28 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
}

Span::Span(unsigned int N){
    this->N = N;
}

Span::~Span(){}

const char *Span::NumberOverflowException::what() const throw(){
    return("Cannot store any more elements\n");
}

void Span::addNumber(int number){
    if(numVector.size() < N)
        numVector.push_back(number);
    else
        throw NumberOverflowException();
}

void Span::shortestSpan(){
    int smallest = std::numeric_limits<int>::max();
    std::sort(numVector.begin(), numVector.end());
    std::vector<int>::iterator it;
    std::vector<int>::iterator tmp;
    for(it = numVector.end() - 1; it > numVector.begin(); it--){
        tmp = it;
        --tmp;
        if((*it - *tmp) < smallest)
            smallest = *it - *tmp;
    }
    std::cout << smallest << std::endl;
}

void Span::longestSpan(){
    int max = *std::max_element(numVector.begin(), numVector.end());
    int min = *std::min_element(numVector.begin(), numVector.end());
    std::cout << max - min << std::endl;
}

void Span::fillRandom(){
    numVector.push_back(rand() % 100);
}

void Span::fillVector(){
    std::srand(std::time(0));
    unsigned int i = 0;
    while(i < N){
        numVector.push_back(rand() % 100);
        i++;
    }
}