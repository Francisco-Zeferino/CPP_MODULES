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
    std::cout << "AAnimal constructor Called" << std::endl;
}

AAnimal::AAnimal(AAnimal &copy){
    std::cout << "AAnimal copy constructor Called" << std::endl;
    this->type = copy.type;
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal destructor Called" << std::endl;
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