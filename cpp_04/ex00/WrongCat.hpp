/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:57:54 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 10:04:05 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCat_HPP
#define WRONGCat_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public :
        WrongCat();
        WrongCat(WrongCat &copy);
        ~WrongCat();
        WrongCat &operator=(WrongCat const &copy);
        void makeSound();
};

#endif