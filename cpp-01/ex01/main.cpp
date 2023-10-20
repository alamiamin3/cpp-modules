/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:11:46 by aalami            #+#    #+#             */
/*   Updated: 2023/10/20 18:01:46 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    int a = 10;
    Zombie  *ff;
    ff = zombieHorde( a, "zombie:uuu");
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