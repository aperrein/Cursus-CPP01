/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:12:12 by aperrein          #+#    #+#             */
/*   Updated: 2023/09/11 12:12:14 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void        replace_line(std::string *line, std::string s1, std::string s2)
{
    size_t      pos = 0;

       while ((pos = (*line).find(s1)) != std::string::npos)
       {
            (*line).erase(pos, s1.size());
            (*line).insert(pos, s2);
       }
}

int         main(int ac, char* av[])
{
    if (ac != 4 || !av[2] || !av[3])
    {
        std::cout << "Bad arguments\n";
        return (1);
    }

    std::ifstream   ifs(av[1]);
    if (!ifs.is_open())
    {
        std::cout << "Error: failed to open " << av[1] << std::endl;
        return (1);
    }

    std::string     new_file = (std::string)av[1] + ".replace";

    std::ofstream   ofs(new_file.c_str());
    if (!ofs.is_open())
    {
        std::cout << "Error: failed to create new file " << new_file << std::endl;
        return (1);
    }

    std::string     line;
    while (getline(ifs, line))
    {
        replace_line(&line, av[2], av[3]);
        ofs << line;
        if (!ifs.eof())
           ofs << std::endl;
    }

    ifs.close();
    ofs.close();
    return (0);
}
