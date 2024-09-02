/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:16:36 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/02 16:25:57 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>
#include <deque>
#include <vector>

template<class T, class D = std::deque<T>>
class MutantStack : public std::stack<T, D> {
    public :
        typedef typename D::iterator iterator;
        MutantStack();
        MutantStack(MutantStack &copy);
        ~MutantStack();
        MutantStack &operator=(const MutantStack &copy);
        iterator begin();
        iterator end();
};

template<class T, class D>
MutantStack<T,D>::iterator MutantStack<T,D>::begin(){
    return c.begin();
}

template<class T, class D>
MutantStack<T,D>::iterator MutantStack<T,D>::end(){
    return c.end();
}

#endif