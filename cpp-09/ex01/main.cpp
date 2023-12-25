/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 16:23:23 by aalami            #+#    #+#             */
/*   Updated: 2023/12/24 18:29:16 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    try
    {
        if (argc == 2)
        {
            std::stringstream stringStream(argv[1]);
            getResult(stringStream);
        }
    }
    catch (const char *err)
    {
        std::cerr<<err<<std::endl;
    }
}