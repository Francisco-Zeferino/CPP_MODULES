/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:59:40 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/06 11:45:00 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &copy) : WrongAnimal(){
    std::cout << "WrongCat copy constructor called" << std::endl;
    this->type = copy.type;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &copy){
    if(this != &copy){
        type = copy.type;
    }
    return(*this);
}

void WrongCat::makeSound() const{
    std::cout << "Not the wanted Miau Miau" << std::endl;
}