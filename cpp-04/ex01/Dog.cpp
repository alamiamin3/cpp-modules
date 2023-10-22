/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:48:12 by aalami            #+#    #+#             */
/*   Updated: 2023/10/21 17:06:50 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout<< "Dog Constructor Called"<< std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog &obj)
{
    Brain *newbrain = new Brain();
    std::cout<< "Dog Copy Constructor Called"<< std::endl;
    type = obj.type;
    *newbrain = *obj.brain;
    brain = newbrain;
}
Dog &Dog::operator=(const Dog &obj)
{
    type = obj.type;
    return(*this);
}
void Dog::makeSound() const
{
    std::cout<< "Dog Sound"<< std::endl;
    
}
Dog::~Dog()
{
    delete brain;
    std::cout<< "Dog Destructor Called"<< std::endl;
}

const std::string &Dog::getType() const
{
    return(type);
}