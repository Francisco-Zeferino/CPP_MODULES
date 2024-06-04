/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:49:35 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 11:11:58 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
    private :
        Brain *dogBrain;
    public :
        Dog();
        Dog(Dog &copy);
        ~Dog();
        Dog &operator=(Dog const &copy);
        void makeSound() const;
};

#endif