/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:34:24 by francisco         #+#    #+#             */
/*   Updated: 2024/05/27 16:21:34 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20){
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target){
    if(_energyPoints <= 0 || _hitPoints <= 0){
        std::cout << "Can't do anything no energy points or hit points available!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(_energyPoints <= 0 || _hitPoints <= 0){
        std::cout << "Can't do anything no energy points or hit points available!" << std::endl;
        return;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << ", has recovered " << amount << " hit points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    _hitPoints -= amount;
}

