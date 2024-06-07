/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:57:54 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/07 11:25:06 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal &copy);
        virtual ~WrongAnimal();
        WrongAnimal &operator=(WrongAnimal const &copy);
        void makeSound() const;
        std::string getType() const;
};

#endif