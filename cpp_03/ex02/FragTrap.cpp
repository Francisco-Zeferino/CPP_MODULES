/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:20:16 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/05/28 15:26:15 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name){
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::~FragTrap(){

}

void FragTrap::attack(const std::string &target){
    if(_energyPoints <= 0 || _hitPoints <= 0){
        std::cout << "Can't do anything no energy points or hit points available!" << std::endl;
        return;
    }
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(){
    std::cout << "High Five to everyone!" << std::endl;
}