/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:43:40 by aalami            #+#    #+#             */
/*   Updated: 2023/12/09 18:44:40 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip> 
int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout<<"Invalid Number of arguments"<<std::endl;
    else
        ScalarConverter::convert(argv[1]);
}