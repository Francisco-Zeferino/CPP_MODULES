/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:42:51 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 11:23:34 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include "iostream"

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal &copy);
        virtual ~Animal();
        Animal &operator=(Animal const &copy);
        virtual void makeSound() const;
        std::string getType() const;
};

#endif