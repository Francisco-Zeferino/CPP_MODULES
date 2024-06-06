/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:44:38 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/06 11:36:57 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal constructor called" << std::endl;
    type = "Animal";
}

Animal::Animal(Animal &copy){
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = copy.type;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &copy){
    if(this != &copy){
        type = copy.type;
    }
    return(*this);
}


void Animal::makeSound() const{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const{
    return(type);
}