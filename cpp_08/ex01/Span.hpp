/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:57:56 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/29 19:19:10 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <time.h>
#include <stdlib.h> 
#include <vector>
#include <exception>

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
        void addNumber();
        void shortestSpan();
        void longestSpan();
        class NumberOverflowException : public std::exception {
            const char *what() const throw();
        };
};

#endif