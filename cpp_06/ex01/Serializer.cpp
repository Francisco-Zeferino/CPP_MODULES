/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:07:01 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/07/12 14:20:14 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){
}

Serializer::Serializer(Serializer const &copy){
    *this = copy;
}

Serializer::~Serializer(){
}

Serializer &Serializer::operator=(Serializer const &copy){
    if (this != &copy)
        *this = copy;
    return *this;
}

uintptr_t Serializer::serialize(Data *data){
    return reinterpret_cast<uintptr_t>(data);
}

Data *Serializer::deserialize(uintptr_t raw){
    return reinterpret_cast<Data *>(raw);
}