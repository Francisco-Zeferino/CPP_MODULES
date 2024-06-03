/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:44:38 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/03 21:36:07 by ffilipe-         ###   ########.fr       */
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


void const Animal::makeSound(){
    
}

void Animal::getType(){
    std::cout << "Type" << std::endl;
}