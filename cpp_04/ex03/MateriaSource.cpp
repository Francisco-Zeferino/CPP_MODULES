/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:03:42 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/05 14:59:06 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for(int i = 0; i < 4; i++)
        materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource &copy){
    *this = copy;
}

MateriaSource::~MateriaSource(){}

MateriaSource &MateriaSource::operator=(MateriaSource const &copy){
    if(this != &copy){
        for(int i = 0; i < 4; i++)
            delete materia[i];
        for(int i = 0; i < 4; i++)
            materia[i] = copy.materia[i];
    }
    return(*this);
}

AMateria *MateriaSource::createMateria(std::string const &type){
    materia[0]->getType();
    for(int i = 0; i < 4; i++){
        if(materia[i] && materia[i]->getType() == type)
            return(materia[i]->clone());
    }
    return NULL;
}

void MateriaSource::learnMateria(AMateria *materia){
    for(int i = 0; i < 4; i++){
        if(this->materia[i]){
            this->materia[i] = materia;
            return;
        }
    }
}