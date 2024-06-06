/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:27:05 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/06 11:51:08 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain constructor Called" << std::endl;
}

Brain::Brain(Brain &copy){
    std::cout << "Brain copy constructor Called" << std::endl;
    for(int i = 0; i < 100; i++)
            ideas[i] = copy.ideas[i];
}

Brain::~Brain(){
    std::cout << "Brain destructor Called" << std::endl;
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