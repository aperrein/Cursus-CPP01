/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:32:23 by aperrein          #+#    #+#             */
/*   Updated: 2023/09/05 10:32:28 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name) : _name(name)
{
    announce();
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " die.\n";
}


void    Zombie::announce(void) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}
