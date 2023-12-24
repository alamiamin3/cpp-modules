/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:02:25 by aalami            #+#    #+#             */
/*   Updated: 2023/12/24 01:54:57 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <mlx.h>

int main(int argc, char **argv)
{
    try
    {
        if (argc == 2)
        {
            std::ifstream input;
            if (isValidInput(input, argv[1]))
                getInput(input, argv[1]);
        }
        else
            throw "Invalid Arguments ";
    }
    catch(const char *str)
    {
        std::cerr << str<< '\n';
    }
    
        
}