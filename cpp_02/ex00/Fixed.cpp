/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco <francisco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:50:30 by francisco         #+#    #+#             */
/*   Updated: 2024/03/18 19:53:55 by francisco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    fixedPoint = 0;
}

Fixed::Fixed(Fixed &cpy){
    std::cout << "Copy assignment operator called" << std::endl;
    *this = cpy;
}

void Fixed::operator=(Fixed const &cpy){
    setRawBits(cpy.getRawBits());
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return fracBits;
}

void Fixed::setRawBits(int const raw){
    fixedPoint = raw;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int main( void ) {
    
Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}