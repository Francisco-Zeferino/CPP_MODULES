/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- < ffilipe-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:57:56 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/30 17:46:44 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <time.h>
#include <stdlib.h> 
#include <vector>
#include <exception>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <limits>
#include <ctime>

class Span{
    private :
        unsigned int N;
        std::vector<int> numVector;
    public :
        Span();
        Span(unsigned int N);
        Span(Span &copy);
        ~Span();
        Span &operator=(const Span &copy);
        void addNumber(int number);
        void shortestSpan();
        void longestSpan();
        class NumberOverflowException : public std::exception {
            const char *what() const throw();
        };
        void fillVector();
        void fillRandom();
};

#endif