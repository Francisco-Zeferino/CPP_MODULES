/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:57:30 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/06 13:17:58 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
    type = "Default";
}

AMateria::AMateria(std::string const &type){
    std::cout << type;
    this->type = type;
}

AMateria::AMateria(AMateria const &copy){
    this->type = copy.type;
}

AMateria::~AMateria(){
    
}

AMateria &AMateria::operator=(AMateria const &copy){
    if(this != &copy){
        type = copy.type;
    }
    return(*this);
}

std::string const &AMateria::getType() const{
    return(type);
}

void AMateria::use(ICharacter &target){
    (void)target;
}