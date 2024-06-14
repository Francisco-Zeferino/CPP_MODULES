/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:52:48 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/14 15:33:08 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include "AForm.hpp"

class ShruberryCreationForm : public AForm{
    public :
        ShruberryCreationForm();
        ShruberryCreationForm(ShruberryCreationForm &copy);
        ~ShruberryCreationForm();
        ShruberryCreationForm &operator=(const ShruberryCreationForm &copy);
};

#endif