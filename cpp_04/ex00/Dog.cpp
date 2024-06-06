/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:50:56 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/06 11:44:28 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(Dog &copy) : Animal(copy){
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = copy.type;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &copy){
    if(this != &copy){
        type = copy.type;
    }
    return(*this);
}

void Dog::makeSound() const{
    std::cout << "Woof Woof" << std::endl;
}