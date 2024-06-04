/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:44:38 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 10:19:47 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){

}

Animal::Animal(Animal &copy){
    *this = copy;
}

Animal::~Animal(){
    
}

Animal &Animal::operator=(Animal const &copy){
    if(this != &copy){
        type = copy.type;
    }
    return(*this);
}


void Animal::makeSound() const{
    
}

std::string Animal::getType() const{
    return(type);
}