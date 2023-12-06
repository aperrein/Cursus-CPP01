/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:22:27 by aperrein          #+#    #+#             */
/*   Updated: 2023/09/12 10:22:29 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void        Harl::complain(std::string level) const
{
        void        (Harl::*member_function[4])(void) const = \
            {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

        std::string     lvl_choose[4] = {"debug", "info", "warning", "error"};

        int     i = 0;
        while (i < 4)
        {
            if (level == lvl_choose[i])
                (this->*(member_function[i]))();
            i++;
        }

}

void        Harl::debug(void) const
{
    std::cout << "debug + Harl complains a lot\n";
}

void        Harl::info(void) const
{
    std::cout << "info + Harl complains a lotlot\n";
}

void        Harl::warning(void) const
{
    std::cout << "warning + Harl complains a lotlotlot\n";
}

void        Harl::error(void) const
{
    std::cout << "error + Harl complains too much\n";
}