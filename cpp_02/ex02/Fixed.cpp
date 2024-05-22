/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:25:29 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/05/22 16:04:07 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fracBits = 8;

Fixed::Fixed(): _fixedNumber(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy){
    *this = copy;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(int const iValue){
    _fixedNumber = iValue << _fracBits;
}

Fixed::Fixed(float const fValue){
     _fixedNumber = roundf(fValue * (1 << _fracBits));
}

Fixed &Fixed::operator=(Fixed const &copy){
    if(this != &copy)
        this->setRawBits(copy.getRawBits());
    return *this;
}

bool Fixed::operator==(Fixed const &a) const{
    return(this->toFloat() == a.toFloat());
}

bool Fixed::operator!=(Fixed const &a) const{
    return(this->toFloat() != a.toFloat());
}

bool Fixed::operator>(Fixed const &a) const{
    return(this->toFloat() > a.toFloat());
}

bool Fixed::operator>=(Fixed const &a) const{
    return(this->toFloat() >= a.toFloat());
}

bool Fixed::operator<(Fixed const &a) const{
    return(this->toFloat() < a.toFloat());
}

bool Fixed::operator<=(Fixed const &a) const{
    return(this->toFloat() <= a.toFloat());
}

Fixed Fixed::operator*(Fixed const &a){
    return(Fixed((this->toFloat() * a.toFloat())));
}

Fixed Fixed::operator+(Fixed const &a){
    return(Fixed((this->toFloat() + a.toFloat())));
}

Fixed &Fixed::operator++(){
    _fixedNumber++;
    return(*this);
}

Fixed Fixed::operator++(int){
    Fixed temp = *this;
    ++_fixedNumber;
    return temp;
}

Fixed Fixed::operator-(Fixed const &a){
    return(Fixed((this->toFloat() - a.toFloat())));
}

Fixed &Fixed::operator--(){
    _fixedNumber--;
    return(*this);
}

Fixed Fixed::operator--(int){
    Fixed temp = *this;
    --_fixedNumber;
    return(temp);
}

Fixed Fixed::operator/(Fixed const &a){
    return(Fixed((this->toFloat() / a.toFloat())));
}

std::ostream &operator<<(std::ostream &output, Fixed const &received){
    output << received.toFloat();
    return(output);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    //std::cout << "getRawBits member function called" << std::endl;
    return _fixedNumber;
}

void Fixed::setRawBits(int const raw){
    _fixedNumber = raw; 
    //std::cout << "setRawBits member function called" << std::endl;
}

float Fixed::toFloat(void) const{
    return((float)_fixedNumber / (1 << _fracBits));
}

int Fixed::toInt(void) const{
    return(_fixedNumber >> _fracBits);
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
    return(a > b ? b : a);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b){
    return(a > b ? b : a);
}