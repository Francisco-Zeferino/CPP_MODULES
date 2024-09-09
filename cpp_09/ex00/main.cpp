/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- < ffilipe-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:54:26 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/09 17:19:06 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <string>

int main(int argc, char **argv) {
  if (argc == 2) {
    userInputParse(argv[1]);
  } else {
    std::cout << "Program usage : ./programName fileName.ext" << std::endl;
  }
}
