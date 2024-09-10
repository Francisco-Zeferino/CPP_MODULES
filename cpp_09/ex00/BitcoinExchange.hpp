/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:54:15 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/10 17:53:50 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <exception>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <map>

class BitcoinExchange {
private:
  std::string userBtcDate;
  float userBtcValue;
  std::ifstream btcFile;
  std::map<std::string, float> dbContainer;
public:
  BitcoinExchange();
  BitcoinExchange(std::ifstream file);
  BitcoinExchange(const BitcoinExchange &copy);
  ~BitcoinExchange();
  BitcoinExchange &operator=(const BitcoinExchange &copy);
  void fileParse();
  void bitcoinValueValidation(std::string valueLine);
  void setFileStream(std::string fileName);
  void parseDataBase();
  void dateValidation();
};

void userInputParse(std::string fileName);

#endif
