/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:21:43 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/05 15:19:21 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
    Span span(5);
    Span span2(3);
    span.fillVector();
    span.longestSpan();
    span.shortestSpan();
    try{
        span2.addNumber(10);
        span2.addNumber(7);
        span2.addNumber(24);
        span2.addNumber(30);
    }catch(std::exception &e){
        std::cout << e.what();
    }
}