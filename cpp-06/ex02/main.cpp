/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:23:46 by aalami            #+#    #+#             */
/*   Updated: 2023/12/12 14:26:59 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include<unistd.h>
typedef struct t_Data
{
    int a;
    char b;
    float c;
    std::string str;
}Data;
int main()
{
    Base *ptr = generate();
    identify(ptr);
    identify(*ptr);
}