/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:34:24 by francisco         #+#    #+#             */
/*   Updated: 2024/05/29 14:31:59 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20){
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy){
    *this = copy;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy){
    if(this != &copy){
        _name = copy._name;
        _attackDamage = copy._attackDamage;
        _energyPoints = copy._energyPoints;
        _hitPoints = copy._hitPoints;
    }
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "Claptrap destructor called" << std::endl;
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
    if(_hitPoints <= 0){
        std::cout << "No damage taken, " << _name << " is already dead." << std::endl;
        return;
    }
    _hitPoints -= amount;
    std::cout << _name << " took " << amount << " of damage!" << std::endl;
}

