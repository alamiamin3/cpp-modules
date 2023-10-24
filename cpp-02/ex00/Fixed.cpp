/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:48:12 by aalami            #+#    #+#             */
/*   Updated: 2023/10/23 11:37:01 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
    std::cout<<"Default constructor called"<<std::endl;
}
Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}
Fixed::Fixed(const Fixed &old)
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = old;
}
int Fixed::getRawBits(void) const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed& Fixed::operator=(const Fixed &old)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this == &old)
        return (*this);
    this->value = old.getRawBits();
    return(*this);
}
