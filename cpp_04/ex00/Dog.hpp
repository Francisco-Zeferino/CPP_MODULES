/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:49:35 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/03 21:35:00 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog: public Animal{
    public :
        Dog();
        Dog(Dog &copy);
        ~Dog();
        Dog &operator=(Dog const &copy);
        void const makeSound();
};