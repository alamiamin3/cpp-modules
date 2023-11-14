/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:48:12 by aalami            #+#    #+#             */
/*   Updated: 2023/10/27 15:10:54 by aalami           ###   ########.fr       */
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
    std::cout<< "Dog Copy Constructor Called"<< std::endl;
    Brain *newbrain = new Brain();
    type = obj.type;
    *newbrain = *obj.brain;
    brain = newbrain;
}
Dog &Dog::operator=(const Dog &obj)
{
    Brain *newbrain = new Brain();
    type = obj.type;
    *newbrain = *obj.brain;
    brain = newbrain;
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