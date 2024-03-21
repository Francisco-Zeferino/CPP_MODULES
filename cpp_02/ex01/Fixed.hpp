/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco <francisco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:49:08 by francisco         #+#    #+#             */
/*   Updated: 2024/03/20 19:47:13 by francisco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed {
    public :
        Fixed();
        Fixed(Fixed const &cpy);
        Fixed(int const iNum);
        Fixed(float const fNum);
        ~Fixed();
        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
        void operator=(const Fixed &cpy);
    private :
        int fixedPoint;
        static const int fracBits = 8;
};

std::ostream& operator<<(std::ostream& oStream, const Fixed& fixedFloat);
