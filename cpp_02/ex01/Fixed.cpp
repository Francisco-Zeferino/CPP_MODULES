/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco <francisco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:50:30 by francisco         #+#    #+#             */
/*   Updated: 2024/03/20 19:47:19 by francisco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    fixedPoint = 0;
}

Fixed::Fixed(Fixed const &cpy){
    std::cout << "Copy assignment operator called" << std::endl;
    *this = cpy;
}

Fixed::Fixed(int const iNum){
    fixedPoint = iNum * (1 << fracBits);
}

Fixed::Fixed(float const fNum){
    fixedPoint = fNum * (1 << fracBits);
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

int Fixed::toInt(void) const{
    return(fixedPoint / (1 << fracBits));
}

float Fixed::toFloat(void) const{
    return(fixedPoint / (1 << fracBits));
}

std::ostream& operator<<(std::ostream &oStream, const Fixed &fixedFloat){
    oStream << fixedFloat.toFloat();
    return(oStream);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}