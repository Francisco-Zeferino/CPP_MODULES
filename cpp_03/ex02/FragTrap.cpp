/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:20:16 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/05/29 13:46:21 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name){
    std::cout << "FragTrap constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(FragTrap &copy){
    *this = copy;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &copy){
    if(this != &copy){
        _name = copy._name;
        _hitPoints = copy._hitPoints;
        _attackDamage = copy._attackDamage;
        _energyPoints = copy._energyPoints;
    }
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called" << std::endl;
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