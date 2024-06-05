/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:31:02 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/05 14:31:51 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{
    private :
        std::string name;
        AMateria *inventory[4];
    public :
        Character();
        Character(std::string name);
        Character(Character &copy);
        ~Character();
        Character &operator=(Character const &copy);
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
        std::string const &getName() const;
};

#endif