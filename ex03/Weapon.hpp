/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:33:42 by aperrein          #+#    #+#             */
/*   Updated: 2023/09/07 12:33:45 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {

private:

    std::string     _type;


public:

    Weapon(std::string type);
    ~Weapon();

    std::string     const & get_type() const;
    void            setType(std::string new_type);

};


#endif