/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:02:25 by aalami            #+#    #+#             */
/*   Updated: 2023/12/23 04:06:11 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <mlx.h>

int main(int argc, char **argv)
{
    // std::string a = "2023-04-31 ";
    // if (!isValidKey(a))
    //             printf("not valid\n");
    // return 0;
    if (argc == 2)
    {
        std::ifstream input;
        if (isValidInput(input, argv[1]))
        {
            std::multimap<std::string, std::string> mymap = getInput(input, argv[1]);
            for (std::multimap<std::string, std::string>::iterator it = mymap.begin() ; it != mymap.end(); it++)
                std::cout<<"key = "<<it->first<<"  value = "<<it->second<<std::endl;
        }
    }
        
}