/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:26:55 by aperrein          #+#    #+#             */
/*   Updated: 2023/09/05 10:26:56 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int     main(void)
{
    Zombie      z1("stack");
    Zombie*     z2 = newZombie("heap");

    randomChump("random");

    delete  z2;
    return (0);
}