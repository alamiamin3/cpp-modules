/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:07:08 by aalami            #+#    #+#             */
/*   Updated: 2023/10/27 14:53:54 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <stdlib.h>


int main()
{
    Animal *j = new Dog();
    Animal *i = new Cat();

    j->makeSound();
    i->makeSound();
    delete j;
    delete i;
}
