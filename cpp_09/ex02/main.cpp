/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:47:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/16 11:37:24 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av){
    PmergeMe a;
    if(ac >= 3)
        a.parseData(av);
    else
        std::cerr << "Not enough arguments." << std::endl;
}