/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- < ffilipe-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:54:15 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/09 17:18:43 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <exception>
#include <fstream>
#include <iostream>

class BitcoinExchange {
private:
  std::ifstream btcFile;

public:
  BitcoinExchange();
  BitcoinExchange(std::ifstream file);
  BitcoinExchange(const BitcoinExchange &copy);
  ~BitcoinExchange();
  BitcoinExchange &operator=(const BitcoinExchange &copy);
};

void userInputParse(std::string fileName);

#endif
