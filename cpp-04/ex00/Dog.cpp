/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:41:30 by aalami            #+#    #+#             */
/*   Updated: 2023/10/19 15:41:56 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout<< "Dog Constructor Called"<< std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &obj)
{
    std::cout<< "Dog Copy Constructor Called"<< std::endl;
    type = obj.type;
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
    std::cout<< "Dog Destructor Called"<< std::endl;
}

const std::string &Dog::getType() const
{
    return(type);
}