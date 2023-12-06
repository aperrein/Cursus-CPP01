/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:33:58 by aperrein          #+#    #+#             */
/*   Updated: 2023/09/07 12:34:00 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{

}

Weapon::~Weapon(void)
{

}

void            Weapon::setType(std::string new_type)
{
    this->_type = new_type;
}

std::string const &        Weapon::get_type() const
{
        return(this->_type);
}