/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:06:25 by aalami            #+#    #+#             */
/*   Updated: 2023/10/27 14:46:58 by aalami           ###   ########.fr       */
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
    std::cout<< "Cat Copy Constructor Called"<< std::endl;
    Brain *newbrain = new Brain();
    type = obj.type;
    *newbrain = *obj.brain;
    brain = newbrain;
}
Cat &Cat::operator=(const Cat &obj)
{
    Brain *newbrain = new Brain();
    type = obj.type;
    *newbrain = *obj.brain;
    brain = newbrain;
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