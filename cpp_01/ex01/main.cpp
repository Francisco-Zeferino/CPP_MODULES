/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:01:17 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/12/04 12:12:35 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zHorde = zombieHorde(5, "Zombie");
    for(int i = 0; i < 5; i++)
        zHorde[i].announce();
    delete [] zHorde;
    return (0);
}