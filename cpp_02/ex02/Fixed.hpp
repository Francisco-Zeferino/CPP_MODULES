/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:25:32 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/05/22 14:39:20 by ffilipe-         ###   ########.fr       */
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
        bool operator>(Fixed const &a);
        bool operator<(Fixed const &a);
        Fixed operator*(Fixed const &a);
        Fixed operator+(Fixed const &a);
        Fixed operator-(Fixed const &a);
        Fixed operator/(Fixed const &a);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt(void) const;
        float toFloat(void) const;
};
std::ostream &operator<<(std::ostream &output, Fixed const &received);

#endif