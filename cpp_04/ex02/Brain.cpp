/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:27:05 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 15:00:16 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
}

Brain::Brain(Brain &copy){
    *this = copy;
}

Brain::~Brain(){

}

Brain &Brain::operator=(Brain const &copy){
    if(this != &copy){
        for(int i = 0; i < 100; i++)
            ideas[i] = copy.ideas[i];
    }
    return(*this);
}

void Brain::setIdeas(int idx, std::string idea){
    ideas[idx] = idea;
}

std::string Brain::getIdeas(int idx){
    return(ideas[idx]);
}