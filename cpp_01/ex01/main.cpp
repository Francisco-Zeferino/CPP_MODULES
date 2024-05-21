/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco <francisco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:01:17 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/05/20 18:34:57 by francisco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zHorde = zombieHorde(1, "Zombie");
    if(!zHorde)
        return 0;
    for(int i = 0; i < 1; i++)
        zHorde[i].announce();
    delete [] zHorde;
    return (0);
}