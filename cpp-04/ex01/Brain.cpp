/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:52:32 by aalami            #+#    #+#             */
/*   Updated: 2023/10/21 16:38:19 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain Constructor called"<<std::endl;
}
Brain::Brain(const Brain &obj)
{
    for(int i = 0; i < 100; i++)
        this->arr[i] = obj.arr[i];
}
Brain &Brain::operator=(const Brain &obj)
{
    for(int i = 0; i < 100; i++)
        this->arr[i] = obj.arr[i];
    return (*this);
}
Brain::~Brain()
{
    std::cout<<"Brain Destructor called"<<std::endl;
}