/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 02:38:04 by aalami            #+#    #+#             */
/*   Updated: 2023/10/16 04:52:11 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
    
}
Fixed::Fixed(const int num)
{
    this->value = num << this->fraction;
}
Fixed::Fixed(const float n)
{
    
    this->value = roundf(n * (1 << this->fraction));
}
Fixed::~Fixed()
{
    // std::cout<<"Destructor called"<<std::endl;
}
Fixed::Fixed(const Fixed &old)
{
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
    this->value = old.getRawBits();
    return(*this);
}
std::ostream &operator<<(std::ostream &cout, const Fixed &obj)
{
    cout << obj.toFloat();
    return (cout);
}
bool Fixed::operator>(const Fixed &b)
{
    if (this->toFloat() > b.toFloat())
        return(true);
    return (false);
}
bool Fixed::operator<(const Fixed &b)
{
    if (this->toFloat() < b.toFloat())
        return(true);
    return (false);
}

bool Fixed::operator>=(const Fixed &b)
{
    if (this->toFloat() >= b.toFloat())
        return(true);
    return (false);
}
bool Fixed::operator<=(const Fixed &b)
{
    if (this->toFloat() <= b.toFloat())
        return(true);
    return (false);
}
bool Fixed::operator==(const Fixed &b)
{
    if (this->toFloat() == b.toFloat())
        return(true);
    return (false);
}

bool Fixed::operator!=(const Fixed &b)
{
    if (this->toFloat() != b.toFloat())
        return(true);
    return (false);
}
Fixed Fixed::operator++(void) //++b
{
    ++this->value;
    return (*this);
}
Fixed Fixed::operator++(int) //++b
{
    Fixed  temp = *this;
    ++this->value;
    return (temp);
}
Fixed Fixed::operator*(const Fixed &a)
{
    Fixed ret;
    this->toFloat() * a.toFloat;
    ret.setRawBits(this->getRawBits() * a.getRawBits());
    std::cout<<this->getRawBits() << "   " << a.getRawBits()<<std::endl;
    return (ret);
}
