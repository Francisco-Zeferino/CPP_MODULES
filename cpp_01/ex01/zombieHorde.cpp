/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:01:32 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/12/04 12:08:29 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if(N <= 0)
        return NULL;
    Zombie *zHorde = new Zombie[N];
    for(int i = 0; i < N; i++)
        zHorde[i].setName(name);
    return (zHorde);
}