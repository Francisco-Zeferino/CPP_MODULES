/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:42:19 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/07 16:21:58 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Default"), droppedCount(0){
    for(int i = 0; i < 4; i++)
        inventory[i] = NULL;
    for(int i = 0; i < 10; i++)
        droppedMaterias[i] = NULL;
}

Character::Character(std::string name) : droppedCount(0){
    this->name = name;
    for(int i = 0; i < 4; i++)
        inventory[i] = NULL;
    for(int i = 0; i < 10; i++)
        droppedMaterias[i] = NULL;
}

Character::Character(Character &copy){
    for(int i = 0; i < 4; i++)
            delete inventory[i];
        for(int i = 0; i < 10; i++)
            delete droppedMaterias[i];
        for(int i = 0; i < 4; i++)
            inventory[i] = copy.inventory[i];
        for(int i = 0; i < 10; i++)
            droppedMaterias[i] = copy.droppedMaterias[i];
        this->name = copy.name;
        this->droppedCount = copy.droppedCount;
}

Character::~Character(){
    for(int i = 0; i < 4; i++)
        delete inventory[i];
    for(int i = 0; i < 10; i++)
        delete droppedMaterias[i];
}

Character &Character::operator=(Character const &copy){
    if(this != &copy){
        for(int i = 0; i < 4; i++)
            delete inventory[i];
        for(int i = 0; i < 10; i++)
            delete droppedMaterias[i];
        for(int i = 0; i < 4; i++)
            inventory[i] = copy.inventory[i];
        for(int i = 0; i < 10; i++)
            droppedMaterias[i] = copy.droppedMaterias[i];
        this->name = copy.name;
        this->droppedCount = copy.droppedCount;
    }
    return (*this);
}

void Character::equip(AMateria *m){
    for(int i = 0; i < 4; i++){
        if(inventory[i] == NULL){
            inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx){
    if(inventory[idx] != NULL){
        std::cout << "Unequiped Materia " << inventory[idx]->getType() << std::endl;
        if(droppedCount < 100)
            droppedMaterias[droppedCount] = inventory[idx];
        else
            droppedCount = 0;
        droppedCount++;
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target){ 
    if(inventory[idx] != NULL && idx >= 0 && idx <= 3){
        inventory[idx]->use(target);
    }
}

std::string const &Character::getName() const{
    return(name);
}