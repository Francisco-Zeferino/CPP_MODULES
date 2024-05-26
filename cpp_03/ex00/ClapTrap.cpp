/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:34:24 by francisco         #+#    #+#             */
/*   Updated: 2024/05/26 15:21:56 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
    
}

ClapTrap::~ClapTrap(){
    
}

void ClapTrap::attack(const std::string &target){
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << ", has recovered " << amount << " hit points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    _hitPoints -= amount;
}

