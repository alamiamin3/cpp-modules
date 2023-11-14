/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:48:34 by aalami            #+#    #+#             */
/*   Updated: 2023/10/27 16:36:31 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <stdlib.h>

int main()
{
 
  {
        int n = 2;

        Animal *animal[n];

        for(int i = 0 ; i < n; i++)
        {
            if (i < (n /2))
                animal[i] = new Dog();
            else
                animal[i] = new Cat();
            std::cout<<"my name is " << animal[i]->getType()<<" "<< i << std::endl;
            std::cout<<"i can make ";
            animal[i]->makeSound();
            // std::cout<<std::endl;
            std::cout<<std::endl;
        }
        
        for(int i = 0 ; i < n; i++)   
            delete animal[i];
    }
    // {
    //     std::cout<<"Test Copy constructors and copy assignements operators"<<std::endl;
    //     Dog a;
    //     Dog b(a);
    //     Dog c;
    //     c = b;
    //     Cat d;
    //     Cat e(d);
    //     Cat f;
    //     f = e;
    // }

}
