/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:50:11 by aperrein          #+#    #+#             */
/*   Updated: 2023/09/05 13:50:14 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie*             zombieHorde(int n, std::string name)
{
    Zombie*     horde = new Zombie[n];

    int     i = 0;
    while (i < n)
    {
        std::string tmp = "";
        std::stringstream   test;
        test << i+1;
        test >> tmp;
        horde[i].set_name(name + tmp);
        horde[i].announce();
        i++;
    }
    return(&(horde[0]));
}