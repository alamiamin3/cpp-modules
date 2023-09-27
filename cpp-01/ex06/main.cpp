/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:15:38 by aalami            #+#    #+#             */
/*   Updated: 2023/09/27 16:17:29 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout<<"number of arguments not valid"<<std::endl;
    else
    {
        Harl obj;
        obj.complain(argv[1]);
    }
}