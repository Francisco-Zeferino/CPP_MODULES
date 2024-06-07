/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:29:17 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/07 16:11:29 by ffilipe-         ###   ########.fr       */
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

    Dog basic;
    {
        Dog tmp = basic;
    }
    
    std::cout << "-------------------" << std::endl;
    std::cout << "Checking Dog Deep Copy" << std::endl;
    std::cout << "-------------------" << std::endl;
    Dog cao;
    Dog cao2;
    std::cout << "-------------------" << std::endl;
    cao.setBrainIdeas(0,"Thinking about food");
    std::cout << cao.getBrainIdeas(0) << std::endl;
    cao2.setBrainIdeas(0,"Not thinking about food");
    cao = cao2;
    cao2.setBrainIdeas(0,"Definitly not thinking about food");
    std::cout << cao.getBrainIdeas(0) << std::endl;
    std::cout << cao2.getBrainIdeas(0) << std::endl;
    std::cout << &cao << std::endl;
    std::cout << &cao2 << std::endl;
    std::cout << "-------------------" << std::endl;

    std::cout << "-------------------" << std::endl;
    std::cout << "Checking Cat Deep Copy" << std::endl;
    std::cout << "-------------------" << std::endl;
    Cat gato;
    Cat gato2;
    std::cout << "-------------------" << std::endl;
    gato.setBrainIdeas(0,"Thinking about food");
    std::cout << gato.getBrainIdeas(0) << std::endl;
    gato2.setBrainIdeas(0,"Not thinking about food");
    gato = gato2;
    gato2.setBrainIdeas(0,"Definitly not thinking about food");
    std::cout << gato.getBrainIdeas(0) << std::endl;
    std::cout << gato2.getBrainIdeas(0) << std::endl;
    std::cout << &gato << std::endl;
    std::cout << &gato2 << std::endl;
    std::cout << "-------------------" << std::endl;
}