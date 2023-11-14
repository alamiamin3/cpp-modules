/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:07:46 by aalami            #+#    #+#             */
/*   Updated: 2023/10/20 16:27:40 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
        std::cout<<"Number of arguments invalid"<<std::endl;
    else if (!argv[2][0] || !argv[3][0])
        std::cout<<"Error: Empty string"<<std::endl;
    else
        return (!copyContent(argv[1], argv[2], argv[3]));
}