/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:29:17 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/07 16:09:40 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal *h = new WrongAnimal();
    const WrongAnimal *w = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << w->getType() << " " << std::endl;
    std::cout << h->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    w->makeSound();
    h->makeSound();
    meta->makeSound();
    delete w;
    delete h;
    delete i;
    delete j;
    delete meta;
    return 0;
}