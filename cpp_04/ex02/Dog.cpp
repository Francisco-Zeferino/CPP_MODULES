/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:50:56 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 19:17:28 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    dogBrain = new Brain();
    type = "Dog";
}

Dog::Dog(Dog &copy) : AAnimal(){
    *this = copy;
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