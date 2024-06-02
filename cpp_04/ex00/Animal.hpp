/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:42:51 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/02 10:54:02 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal &copy);
        ~Animal();
        Animal &operator=(Animal const &copy);
        void makeSound();
};