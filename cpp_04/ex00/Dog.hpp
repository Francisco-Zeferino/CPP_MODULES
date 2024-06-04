/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:49:35 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 10:18:32 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog: public Animal{
    public :
        Dog();
        Dog(Dog &copy);
        ~Dog();
        Dog &operator=(Dog const &copy);
        void makeSound() const;
};

#endif