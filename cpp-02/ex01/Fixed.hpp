/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 01:00:49 by aalami            #+#    #+#             */
/*   Updated: 2023/10/16 02:18:16 by aalami           ###   ########.fr       */
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
};

std::ostream &operator<<(std::ostream &cout, const Fixed &obj);

#endif