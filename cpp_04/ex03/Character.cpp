/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:42:19 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/05 14:56:04 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    for(int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(std::string name){
    this->name = name;
    for(int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(Character &copy){
    *this = copy;
}

Character::~Character(){}

Character &Character::operator=(Character const &copy){
    if(this != &copy){
        for(int i = 0; i < 4; i++)
            delete inventory[i];
        for(int i = 0; i < 4; i++)
            inventory[i] = copy.inventory[i];
        this->name = copy.name;
    }
    return (*this);
}

void Character::equip(AMateria *m){
    for(int i = 0; i < 4; i++){
        if(inventory[i] == NULL)
            inventory[i] = m;
    }
}

void Character::unequip(int idx){
    if(!inventory[idx]){
        std::cout << "Unequiped Materia " << inventory[idx]->getType() << std::endl;
    }
}

void Character::use(int idx, ICharacter &target){
    if(!inventory[idx]){
        std::cout << name << " used " << inventory[idx]->getType() << " against " << target.getName() << std::endl;
    }
}

std::string const &Character::getName() const{
    return(name);
}

