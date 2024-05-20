/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco <francisco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:25:36 by francisco         #+#    #+#             */
/*   Updated: 2024/03/07 18:33:48 by francisco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    _name = name;
    _weaponB = NULL;
}

HumanB::~HumanB() {
    
}

void HumanB::attack() {
    if(_weaponB)
        std::cout << _name << " has attacked with their " << _weaponB->getType() << std::endl;
    else
        std::cout << _name << " has attacked with their bare hands" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    _weaponB = &weapon;
}