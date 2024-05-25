/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco <francisco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:25:32 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/05/25 10:21:13 by francisco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed{
    private :
        int _fixedNumber;
        static const int _fracBits;
    public :
        Fixed();
        Fixed(Fixed const &copy);
        Fixed(int const iValue);
        Fixed(float const fValue);
        Fixed &operator=(Fixed const &copy);
        ~Fixed();
        bool operator>(Fixed const &a) const;
        bool operator<(Fixed const &a) const;
        bool operator>=(Fixed const &a) const;
        bool operator<=(Fixed const &a) const;
        bool operator==(Fixed const &a) const;
        bool operator!=(Fixed const &a) const;
        Fixed operator*(Fixed const &a);
        Fixed operator+(Fixed const &a);
        Fixed &operator++();
        Fixed operator++(int);
        Fixed operator-(Fixed const &a);
        Fixed &operator--();
        Fixed operator--(int);
        Fixed operator/(Fixed const &a);
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed const &min(Fixed const &a, Fixed const &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static Fixed const &max(Fixed const &a, Fixed const &b);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt(void) const;
        float toFloat(void) const;
};
std::ostream &operator<<(std::ostream &output, Fixed const &received);

#endif