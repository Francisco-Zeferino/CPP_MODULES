/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:25:32 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/05/21 16:12:20 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FIXED_HPP
#ifndef FIXED_HPP
#endif  //FIXED_HPP

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
        ~Fixed();
        Fixed &operator=(Fixed const &copy);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt(void) const;
        float toFloat(void) const;
};
std::ostream &operator<<(std::ostream &output, Fixed const &received);
