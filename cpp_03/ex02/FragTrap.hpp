/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:20:25 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/05/28 15:23:00 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        FragTrap(const std::string &name);
        ~FragTrap();
        void attack(const std::string &target);
        void highFivesGuys(void);
};