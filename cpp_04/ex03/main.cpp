/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:06:08 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/05 14:57:49 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "CureMateria.hpp"
#include "IceMateria.hpp"

int main(){
    MateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    Character *manel = new Character("Manel");
    AMateria *material;

    material = src->createMateria("ice");
    manel->equip(material);
    //manel->unequip(0);
    return 0;
}