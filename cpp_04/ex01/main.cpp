/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:29:17 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 13:11:47 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *animals[10];
    
    for(int i =0; i < 5; i++){
        animals[i] = new Dog();
    }

    for(int i = 5; i < 10; i++){
        animals[i] = new Cat();
    }

    for(int i = 0; i < 10; i++){
        animals[i]->makeSound();
    }

    for(int i = 0; i < 10; i++){
        delete animals[i];
    }

    Dog cao;
    Dog cao2;

    cao = cao2;
    std::cout << &cao << std::endl;
    std::cout << &cao2 << std::endl;
}