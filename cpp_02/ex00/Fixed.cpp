/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:25:29 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/05/21 15:28:08 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fracBits = 8;

Fixed::Fixed(): _fixedNumber(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &copy){
    *this = copy;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &copy){
    if(this != &copy)
        this->setRawBits(copy.getRawBits());
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedNumber;
}

void Fixed::setRawBits(int const raw){
    _fixedNumber = raw; 
    std::cout << "setRawBits member function called" << std::endl;
}