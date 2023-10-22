/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:11:46 by aalami            #+#    #+#             */
/*   Updated: 2023/10/22 18:40:49 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void   a()
{
    system("leaks zombie");
}
int main()
{
    atexit(a);
    int a = 0;
    Zombie  *ff;
    ff = zombieHorde( a, "foo");
    int i = 0;
    if (!ff)
        return (1);
    while (i < a)
    {
        std::cout<<"zombie number " << i + 1 << " ";
        ff[i].announce();
        i++;
    }
    delete[] ff;
}