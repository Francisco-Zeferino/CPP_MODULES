/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco <francisco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:49:08 by francisco         #+#    #+#             */
/*   Updated: 2024/03/15 15:02:20 by francisco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed {
    public :
        Fixed();
        Fixed(Fixed &cpy);
        void operator=(const Fixed &cpy);
        ~Fixed();
    private :
        int fixedPoint;
        static const int fracBits;
    int getRawBits(void);
    void setRawBits(int const raw);
};