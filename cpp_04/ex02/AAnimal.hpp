/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:42:51 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 15:38:34 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include "iostream"

class AAnimal{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(AAnimal &copy);
        virtual ~AAnimal();
        AAnimal &operator=(AAnimal const &copy);
        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif