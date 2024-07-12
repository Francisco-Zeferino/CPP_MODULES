/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:07:06 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/07/12 14:18:47 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include "Data.hpp"

typedef unsigned int * uintptr_t;

class Serializer
{
    private:
        Serializer();
        Serializer(Serializer const &copy);
        ~Serializer();
        Serializer &operator=(Serializer const &copy);
    public:
        static uintptr_t serialize(Data *data);
        static Data *deserialize(uintptr_t raw);
};

#endif