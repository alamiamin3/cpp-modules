/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:19:55 by aalami            #+#    #+#             */
/*   Updated: 2023/09/19 22:11:06 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>

void    a()
{
    system("leaks zombie");
}
int main()
{
    atexit(a);
    randomChump("a");
    randomChump("b");
    randomChump("c");
    randomChump("d");
    randomChump("e");
    randomChump("f");
    randomChump("g");
}