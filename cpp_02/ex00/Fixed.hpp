/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:25:32 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/05/21 16:13:26 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FIXED_HPP
#ifndef FIXED_HPP
#endif  //FIXED_HPP

#include <iostream>

class Fixed{
    private :
        int _fixedNumber;
        static const int _fracBits;
    public :
        Fixed();
        Fixed(Fixed &copy);
        ~Fixed();
        Fixed &operator=(Fixed const &copy);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};
