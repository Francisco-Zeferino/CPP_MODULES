/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco <francisco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:05:00 by francisco         #+#    #+#             */
/*   Updated: 2024/03/05 15:26:06 by francisco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) {
    _type = weapon;
}

void Weapon::setType(std::string newType) {
    _type = newType;
}

const std::string Weapon::getType() {
    return _type;
}