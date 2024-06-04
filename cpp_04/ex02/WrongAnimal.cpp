/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:59:37 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 18:50:11 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){

}

WrongAnimal::WrongAnimal(WrongAnimal &copy){
    *this = copy;
}

WrongAnimal::~WrongAnimal(){
    
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy){
    if(this != &copy){
        type = copy.type;
    }
    return(*this);
}


void WrongAnimal::makeSound(){
    
}

std::string WrongAnimal::getType(){
    return(type);
}