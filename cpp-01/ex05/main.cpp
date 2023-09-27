/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 01:24:43 by aalami            #+#    #+#             */
/*   Updated: 2023/09/27 15:35:05 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl obj;
    std::string line;
    while (1)
    {
        std::cout<<"Enter a level : ";
        getline(std::cin, line);
        if (!std::cin)
            break;
        else
        {
            if (!line.compare("DEBUG") || !line.compare("WARNING") || !line.compare("INFO") || !line.compare("ERROR"))
                obj.complain(line);
            else if(!line.compare("EXIT"))
                break;
            else
                continue;   
        }
    }
    
}