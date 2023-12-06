/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:34:52 by aperrein          #+#    #+#             */
/*   Updated: 2023/09/07 12:34:55 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    this->_weapon = NULL;
}

HumanB::~HumanB(void)
{
    
}

void    HumanB::attack(void) const
{
    if (this->_weapon)
    {
        std::cout << this->_name << " attacks with his ";
        std::cout << (*this->_weapon).get_type() << std::endl;
    }
    else
        std::cout << this->_name << " tries to attack without weapon\n";
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	this->_weapon = &new_weapon;
}