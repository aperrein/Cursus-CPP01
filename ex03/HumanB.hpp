/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:34:43 by aperrein          #+#    #+#             */
/*   Updated: 2023/09/07 12:34:44 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

private:

    std::string     _name;
    Weapon*         _weapon;


public:

    HumanB(std::string name);
    ~HumanB();

    void            attack(void) const;
    void            setWeapon(Weapon &new_weapon);

};


#endif
