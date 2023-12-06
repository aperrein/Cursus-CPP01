/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:22:00 by aperrein          #+#    #+#             */
/*   Updated: 2023/09/12 10:22:01 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl        h;

	h.complain("debug");
	h.complain("test d'un truc qui doit rien faire");
    h.complain("infoo");
	h.complain("info");
	h.complain("warning");
	h.complain("error");

	return (0);
}
