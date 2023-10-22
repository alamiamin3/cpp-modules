/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:47:32 by aalami            #+#    #+#             */
/*   Updated: 2023/10/21 17:01:12 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout<< "Cat Constructor Called"<< std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat &obj)
{
    Brain *newbrain = new Brain();
    std::cout<< "Cat Copy Constructor Called"<< std::endl;
    type = obj.type;
    *newbrain = *obj.brain;
    brain = newbrain;
}
Cat &Cat::operator=(const Cat &obj)
{
    type = obj.type;
    return(*this);
}
void Cat::makeSound() const
{
    std::cout<< "Cat Sound"<< std::endl;
}
Cat::~Cat()
{
    delete brain;
    std::cout<< "Cat Destructor Called"<< std::endl;
}

const std::string &Cat::getType() const
{
    return(type);
}