/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:48:34 by aalami            #+#    #+#             */
/*   Updated: 2023/10/21 19:23:04 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <stdlib.h>

void a()
{
    system("leaks animal");
}
int main()
{
    // atexit(a);
    int n = 10;
    Animal *animal[n];

    for(int i = 0 ; i < n; i++)
    {
        if (i < (n /2))
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
        std::cout<<"my name is " << animal[i]->getType()<<" "<< i << std::endl<<std::endl;
        std::cout<<"i can make ";
        animal[i]->makeSound();
        std::cout<<std::endl;
        std::cout<<std::endl;
    }
    
    for(int i = 0 ; i < n; i++)   
        delete animal[i];
    
    // std::cout<<std::endl<<std::endl<<"TEST THE COPY CONSTRUCTOR "<< std::endl<<std::endl;
    // Dog *a = new Dog();
    // std::cout<<"a constructed ! "<< std::endl<<std::endl;
    // Dog b = *a;
    // std::cout<<"b constructed ! "<< std::endl<<std::endl;
    // a->makeSound();
    // b.makeSound();
    // std::cout<<"b Destructed ! "<< std::endl<<std::endl;
    
    // delete a;
//     const Animal *j = new Dog();
// const Animal *i = new Cat();
//             std::cout<<"my name is " << i->getType() << std::endl;
//             std::cout<<"i can make ";
//             i->makeSound();
//             std::cout<<"my name is " << j->getType() << std::endl;
//             std::cout<<"i can make ";
//             j->makeSound();
// delete j;//sh
// delete i;//sh
}
