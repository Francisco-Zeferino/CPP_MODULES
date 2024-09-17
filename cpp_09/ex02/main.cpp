/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:47:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/17 19:36:52 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av){
    if(ac >= 3)
        parseData(av);
    else
        std::cerr << "Not enough arguments." << std::endl;
}