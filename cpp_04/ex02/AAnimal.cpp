/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:44:38 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 10:19:47 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){

}

AAnimal::AAnimal(AAnimal &copy){
    *this = copy;
}

AAnimal::~AAnimal(){
    
}

AAnimal &AAnimal::operator=(AAnimal const &copy){
    if(this != &copy){
        type = copy.type;
    }
    return(*this);
}


void AAnimal::makeSound() const{
    
}

std::string AAnimal::getType() const{
    return(type);
}