/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:57:54 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/06 10:29:35 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public :
        WrongCat();
        WrongCat(WrongCat &copy);
        ~WrongCat();
        WrongCat &operator=(WrongCat const &copy);
        void makeSound() const;
};

#endif