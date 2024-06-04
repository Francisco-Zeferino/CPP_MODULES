/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:18:56 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 10:19:17 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat: public Animal{
    public :
        Cat();
        Cat(Cat &copy);
        ~Cat();
        Cat &operator=(Cat const &copy);
        void makeSound() const;
};

#endif