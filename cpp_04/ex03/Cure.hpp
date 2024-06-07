/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:04:11 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/07 16:19:02 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria{
    public :
        Cure();
        Cure(Cure &copy);
        ~Cure();
        Cure &operator=(Cure const &copy);
        Cure *clone() const;
        void use(ICharacter &target);
};

#endif