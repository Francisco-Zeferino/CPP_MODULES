/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:27:05 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 14:40:17 by ffilipe-         ###   ########.fr       */
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