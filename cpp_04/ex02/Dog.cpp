/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:50:56 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/07 15:38:13 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog constructor Called" << std::endl;
    dogBrain = new Brain();
    type = "Dog";
}

Dog::Dog(Dog &copy) : AAnimal(copy){
    std::cout << "Dog copy constructor Called" << std::endl;
    dogBrain = new Brain(*copy.dogBrain);
    // this->type = copy.type;
    // *dogBrain = *copy.dogBrain;
}

Dog::~Dog(){
    std::cout << "Dog Destructor Called" << std::endl;
    delete dogBrain;
}

Dog &Dog::operator=(Dog const &copy){
    if(this != &copy){
        type = copy.type;
        *dogBrain = *copy.dogBrain;
    }
    return(*this);
}

void Dog::makeSound() const{
    std::cout << "Woof Woof" << std::endl;
}

void Dog::setBrainIdeas(int idx, std::string idea){
    dogBrain->setIdeas(idx, idea);
}

std::string Dog::getBrainIdeas(int idx){
    return(dogBrain->getIdeas(idx));
}