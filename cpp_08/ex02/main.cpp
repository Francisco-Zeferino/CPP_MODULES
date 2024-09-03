/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:16:30 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/03 16:55:24 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> ms;
    MutantStack<int, std::vector<int> > vector;
    MutantStack<int, std::list<int> > list;
    MutantStack<int, std::deque<int> > deque;
    MutantStack<int>::iterator it;
    std::vector<int>::iterator vectorit;
    std::list<int>::iterator listit;
    std::deque<int>::iterator dequeit;

    std::cout << "-----------MutantStack------------" << std::endl;
    ms.push(55);
    ms.push(70);
    ms.push(11);
    ms.push(39);
    ms.push(92);
    ms.push(2);
    for(it = ms.begin(); it != ms.end(); it++){
        std::cout << *it << std::endl;
    }
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "-----------Vector------------" << std::endl;
    vector.push(19);
    vector.push(29);
    vector.push(45);
    vector.push(246);
    vector.push(13);
    for(vectorit = vector.begin(); vectorit != vector.end(); vectorit++){
        std::cout << *vectorit << std::endl;
    }
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "-----------List------------" << std::endl;
    list.push(20);
    list.push(44);
    list.push(88);
    list.push(21);
    list.push(9);
    for(listit = list.begin(); listit != list.end(); listit++){
        std::cout << *listit << std::endl;
    }
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "-----------Deque------------" << std::endl;
    deque.push(77);
    deque.push(80);
    deque.push(36);
    deque.push(14);
    deque.push(64);
    deque.push(99);
    for(dequeit = deque.begin(); dequeit != deque.end(); dequeit++){
        std::cout << *dequeit << std::endl;
    }
    std::cout << "--------------------------------------" << std::endl;
}