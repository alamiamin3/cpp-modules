/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 02:38:04 by aalami            #+#    #+#             */
/*   Updated: 2023/10/23 16:37:25 by aalami           ###   ########.fr       */
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
    this->value = static_cast<int>(roundf(n * (1 << this->fraction)));
}
Fixed::~Fixed()
{
    
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
    cout <<obj.toFloat();
    return (cout);
}
bool Fixed::operator>(const Fixed &b) const 
{
    if (this->toFloat() > b.toFloat())
        return(true);
    return (false);
}
bool Fixed::operator<(const Fixed &b) const
{
    if (this->toFloat() < b.toFloat())
        return(true);
    return (false);
}

bool Fixed::operator>=(const Fixed &b) const
{
    if (this->toFloat() >= b.toFloat())
        return(true);
    return (false);
}
bool Fixed::operator<=(const Fixed &b) const
{
    if (this->toFloat() <= b.toFloat())
        return(true);
    return (false);
}
bool Fixed::operator==(const Fixed &b) const
{
    if (this->toFloat() == b.toFloat())
        return(true);
    return (false);
}

bool Fixed::operator!=(const Fixed &b) const
{
    if (this->toFloat() != b.toFloat())
        return(true);
    return (false);
}
Fixed &Fixed::operator++(void) //++b
{
    ++this->value;
    return (*this);
}
Fixed Fixed::operator++(int) //b++
{
    Fixed  temp = *this;
    ++this->value;
    return (temp);
}
Fixed &Fixed::operator--(void) //--b
{
    --this->value;
    return (*this);
}
Fixed Fixed::operator--(int) //b--
{
    Fixed  temp = *this;
    --this->value;
    return (temp);
}
float Fixed::operator*(const Fixed &a) const
{
    return (this->toFloat() * a.toFloat());
}
float Fixed::operator+(const Fixed &a) const
{
    return (this->toFloat() + a.toFloat());
}
float Fixed::operator-(const Fixed &a) const
{
    return (this->toFloat() - a.toFloat());
}
float Fixed::operator/(const Fixed &a) const
{
    return (this->toFloat() / a.toFloat());
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if(a.getRawBits() > b.getRawBits())
        return(b);
    return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if(a.getRawBits() > b.getRawBits())
        return(b);
    return (a);
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if(a.getRawBits() > b.getRawBits())
        return(a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if(a.getRawBits() > b.getRawBits())
        return(a);
    return (b);
}
