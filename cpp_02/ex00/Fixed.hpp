/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco <francisco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:49:08 by francisco         #+#    #+#             */
/*   Updated: 2024/03/18 19:48:21 by francisco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed {
    public :
        Fixed();
        Fixed(Fixed &cpy);
        void operator=(const Fixed &cpy);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
    private :
        int fixedPoint;
        static const int fracBits = 8;
};