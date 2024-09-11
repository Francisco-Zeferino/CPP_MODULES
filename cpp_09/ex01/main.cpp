/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- < ffilipe-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:02:19 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/11 17:06:34 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv){
  RPN rpn;
  if(argc == 2){
    rpn.parse(static_cast<std::string>(argv[1]));
  }
  else{
    std::cout << "Invalid arguments" << std::endl;
  }
}