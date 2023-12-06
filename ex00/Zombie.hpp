/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:32:07 by aperrein          #+#    #+#             */
/*   Updated: 2023/09/05 10:32:10 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>


class Zombie {

private:

    std::string     _name;


public:

    Zombie(std::string name);
    ~Zombie();
    
    void            announce(void) const;
};

void        randomChump(std::string name);
Zombie*     newZombie(std::string name);

#endif
