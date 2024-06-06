/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:59:37 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/06 11:44:50 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal constructor called" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal &copy){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    this->type = copy.type;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy){
    if(this != &copy){
        type = copy.type;
    }
    return(*this);
}


void WrongAnimal::makeSound() const{
    std::cout << "Not the wanted Animal sound" << std::endl;
}

std::string WrongAnimal::getType() const{
    return(type);
}