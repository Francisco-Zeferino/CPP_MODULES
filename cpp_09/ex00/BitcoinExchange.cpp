/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- < ffilipe-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:54:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/09 17:32:04 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) { *this = copy; }

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy) {
  if (this != &copy) {
  }
  return (*this);
}

void userInputFile(std::string fileName) {
  std::ifstream file;
  file.open(fileName.c_str(), std::ifstream::in);
  if(file.fail())
    std::cout << "Failed opening file!" << std::endl;
  else
    
}
