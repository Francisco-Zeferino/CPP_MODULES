/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:18:56 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 19:17:17 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal{
    private :
        Brain *catBrain;
    public :
        Cat();
        Cat(Cat &copy);
        ~Cat();
        Cat &operator=(Cat const &copy);
        void makeSound() const;
        std::string getBrainIdeas(int idx);
        void setBrainIdeas(int idx, std::string idea);
};

#endif