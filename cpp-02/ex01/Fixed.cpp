/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 01:00:40 by aalami            #+#    #+#             */
/*   Updated: 2023/10/23 16:36:45 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
    std::cout<<"Default constructor called"<<std::endl;
}
Fixed::Fixed(const int num)
{
    this->value = num << this->fraction;
    std::cout<<"Int constructor called"<<std::endl;
}
Fixed::Fixed(const float n)
{
    
    this->value = static_cast<int>(roundf(n * (1 << this->fraction)));
    std::cout<<"Float constructor called" << std::endl;
}
Fixed::~Fixed()
{
    std::cout<<"Destructor called" <<std::endl;
}
Fixed::Fixed(const Fixed &old)
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = old;
}

float   Fixed::toFloat(void) const
{
    return((float)(this->value) / (1 << fraction));
}
int   Fixed::toInt(void) const
{
    
    return (value >> fraction);
}
int Fixed::getRawBits(void) const
{
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed& Fixed::operator=(const Fixed &old)
{
    std::cout<<"Copy assignment operator called"<< std::endl;
    this->value = old.getRawBits();
    return(*this);
}
std::ostream &operator<<(std::ostream &cout, const Fixed &obj)
{
    cout << obj.toFloat();
    return (cout);
}
