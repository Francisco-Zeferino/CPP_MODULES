/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:37:24 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/27 14:22:58 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <cstdlib>
#include <iostream>

class Base{
    public :
        virtual ~Base();
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

#endif