/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco <francisco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:02:57 by francisco         #+#    #+#             */
/*   Updated: 2024/03/07 18:37:42 by francisco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Weapon {
    private :
        std::string _type;
    public :
        Weapon(std::string weapon);
        const std::string getType();
        void setType(std::string newType);
};
