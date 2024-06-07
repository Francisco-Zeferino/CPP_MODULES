/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:20:47 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/07 15:34:03 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat constructor called" << std::endl;
    catBrain = new Brain();
    type = "Cat";
}

Cat::Cat(Cat &copy) : Animal(copy){
    std::cout << "Cat copy constructor called" << std::endl;
    catBrain = new Brain(*copy.catBrain);
    //this->type = copy.type;
    //*catBrain = *copy.catBrain;
}

Cat::~Cat(){
    std::cout << "Cat Destructor Called" << std::endl;
    delete catBrain;
}

Cat &Cat::operator=(Cat const &copy){
    if(this != &copy){
        type = copy.type;
        *catBrain = *copy.catBrain;
    }
    return(*this);
}

void Cat::makeSound() const{
    std::cout << "Miau Miau" << std::endl;
}

void Cat::setBrainIdeas(int idx, std::string idea){
    catBrain->setIdeas(idx, idea);
}

std::string Cat::getBrainIdeas(int idx){
    return(catBrain->getIdeas(idx));
}