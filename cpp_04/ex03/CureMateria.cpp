/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:06:33 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/06 13:24:33 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CureMateria.hpp"

Cure::Cure(){
    type = "cure";
}

Cure::Cure(Cure &copy){
    *this = copy;
}

Cure::~Cure(){

}

Cure &Cure::operator=(Cure const &copy){
    if(this != &copy){
        type = copy.type;
    }
    return (*this);
}

Cure *Cure::clone() const{
    return(new Cure());
}

void Cure::use(ICharacter &target){
    std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
