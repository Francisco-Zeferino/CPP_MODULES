/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:59:40 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 15:42:05 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
    type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &copy) : WrongAnimal(){
    *this = copy;
}

WrongCat::~WrongCat(){

}

WrongCat &WrongCat::operator=(WrongCat const &copy){
    if(this != &copy){
        type = copy.type;
    }
    return(*this);
}

void WrongCat::makeSound(){
    std::cout << "Not the wanted Miau Miau" << std::endl;
}