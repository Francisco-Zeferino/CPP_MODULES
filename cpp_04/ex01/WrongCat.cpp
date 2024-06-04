/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:59:40 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 10:09:01 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &copy){
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