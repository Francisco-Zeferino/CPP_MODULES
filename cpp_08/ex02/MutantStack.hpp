/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:16:36 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/03 16:38:03 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>
#include <iostream>
#include <deque>
#include <vector>
#include <list>

template<class T, class D = std::deque<T> >
class MutantStack : public std::stack<T, D> {
    public :
        typedef typename D::iterator iterator;
        MutantStack();
        MutantStack(const MutantStack &copy);
        ~MutantStack();
        MutantStack &operator=(const MutantStack &copy);
        iterator begin();
        iterator end();
};

template<class T, class D>
MutantStack<T, D>::MutantStack(){};

template<class T, class D>
MutantStack<T, D>::~MutantStack(){};

template<class T, class D>
MutantStack<T, D>::MutantStack(const MutantStack &copy){
    *this = copy;
};

template<class T, class D>
MutantStack<T, D> &MutantStack<T, D>::operator=(const MutantStack &copy){
    if(this != &copy)
        *this = copy;
    return(*this);
};

template<class T, class D>
typename MutantStack<T,D>::iterator MutantStack<T,D>::begin(){
    return this->c.begin();
}

template<class T, class D>
typename MutantStack<T,D>::iterator MutantStack<T,D>::end(){
    return this->c.end();
}

#endif