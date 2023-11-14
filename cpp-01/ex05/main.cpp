/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 01:24:43 by aalami            #+#    #+#             */
/*   Updated: 2023/10/22 14:29:13 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl obj;
    if (argc != 2)
        return (1);
    std::string line = argv[1];
    if (!line.compare("DEBUG") || !line.compare("WARNING") || !line.compare("INFO") || !line.compare("ERROR"))
            obj.complain(line);        
}