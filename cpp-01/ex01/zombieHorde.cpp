/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:15:22 by aalami            #+#    #+#             */
/*   Updated: 2023/10/20 17:58:42 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    Zombie  *zombies = new Zombie[N];
    if (!zombies)
        return (0);
    int i = -1;
    while (++i < N)
        zombies[i].setName(name);
    return(zombies);
}