/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:23:33 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/07 16:17:55 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
    type = "ice";
}

Ice::Ice(Ice &copy){
    *this = copy;
}

Ice::~Ice(){}

Ice &Ice::operator=(Ice const &copy){
    if(this != &copy){
        type = copy.type;
    }
    return (*this);
}

Ice *Ice::clone() const{
    return(new Ice());
}

void Ice::use(ICharacter &target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}