/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:20:25 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/05/29 13:42:51 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        FragTrap();
        FragTrap(const std::string &name);
        FragTrap(FragTrap &copy);
        ~FragTrap();
        FragTrap &operator=(FragTrap const &copy);
        void attack(const std::string &target);
        void highFivesGuys(void);
};