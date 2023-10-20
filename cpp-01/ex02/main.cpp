/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:04:49 by aalami            #+#    #+#             */
/*   Updated: 2023/10/20 17:56:39 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str;
    str = "HI THIS IS BRAIN";
    std::string& stringREF = str;
    std::string *stringPTR = &str;

    std::cout<<&str<<std::endl;
    std::cout<<stringPTR<<std::endl;
    std::cout<<&stringREF<<std::endl;
    
    std::cout<<str<<std::endl;
    std::cout<<*stringPTR<<std::endl;
    std::cout<<stringREF<<std::endl;
}