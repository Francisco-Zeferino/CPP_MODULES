/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:20:47 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/06 11:44:14 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(Cat &copy) : Animal(copy){
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = copy.type;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
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