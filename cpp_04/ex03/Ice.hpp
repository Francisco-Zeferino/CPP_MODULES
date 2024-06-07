/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:26:32 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/07 16:18:47 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
    public :
        Ice();
        Ice(Ice &copy);
        ~Ice();
        Ice &operator=(Ice const &copy);
        Ice *clone() const;
        void use(ICharacter &target);
};

#endif