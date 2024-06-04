/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:20:47 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 15:41:29 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
    type = "Cat";
}

Cat::Cat(Cat &copy) : Animal(){
    *this = copy;
}

Cat::~Cat(){

}

Cat &Cat::operator=(Cat const &copy){
    if(this != &copy){
        type = copy.type;
    }
    return(*this);
}

void Cat::makeSound() const{
    std::cout << "Miau Miau" << std::endl;
}