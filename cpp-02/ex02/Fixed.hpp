/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 02:37:19 by aalami            #+#    #+#             */
/*   Updated: 2023/10/23 16:09:22 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <math.h>

class Fixed
{
private:
    int value;
    static const int fraction = 8;
public:
    Fixed();
    Fixed(const int nbr);
    Fixed(const float n);
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
    Fixed(const Fixed &old);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed &operator=(const Fixed &old);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    bool operator>(const Fixed &a) const;
    bool operator<(const Fixed &a) const;
    bool operator>=(const Fixed &a) const;
    bool operator<=(const Fixed &a) const;
    bool operator==(const Fixed &a) const;
    bool operator!=(const Fixed &a) const;
    Fixed &operator++(void);
    Fixed operator++(int);
    Fixed &operator--(void);
    Fixed operator--(int);
    float operator*(const Fixed &a) const;
    float operator+(const Fixed &a) const;
    float operator-(const Fixed &a) const;
    float operator/(const Fixed &a) const;
};

std::ostream &operator<<(std::ostream &cout, const Fixed &obj);

#endif