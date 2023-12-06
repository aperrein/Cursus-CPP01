/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:13:04 by aperrein          #+#    #+#             */
/*   Updated: 2023/09/07 12:13:06 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(void)
{
    std::string     str = "HI THIS IS BRAIN";

    std::string     *stringPTR = &str;

    std::string	    &stringREF = str;

    std::cout << std::endl << "&str : " << &str << std::endl;
    std::cout << "stringPTR : " << stringPTR << std::endl;
    std::cout << "&stringREF : " << &stringREF << std::endl << std::endl;

    std::cout << "str : " << str << std::endl;
    std::cout << "*stringPTR : " << *stringPTR << std::endl;
    std::cout << "stringREF : " << stringREF << std::endl << std::endl;

    return (0);
}
