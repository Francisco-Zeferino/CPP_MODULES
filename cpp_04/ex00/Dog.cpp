/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:50:56 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 19:14:20 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
}

Dog::Dog(Dog &copy) : Animal(){
    *this = copy;
}

Dog::~Dog(){
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