/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:34:16 by aperrein          #+#    #+#             */
/*   Updated: 2023/09/07 12:34:18 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

private:

    std::string     _name;
    Weapon          &_weapon;


public:

    HumanA(std::string name, Weapon &weapon);
    ~HumanA();

    void            attack(void) const;

};


#endif