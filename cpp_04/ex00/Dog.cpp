/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:50:56 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/02 10:53:12 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){

}

Dog::Dog(Dog &copy){
    *this = copy;
}

Dog::~Dog(){

}

Dog &Dog::operator=(Dog const &copy){
    if(this != &copy){
        type = copy.type;
    }
}