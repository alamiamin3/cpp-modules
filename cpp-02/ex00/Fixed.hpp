/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:11:46 by aalami            #+#    #+#             */
/*   Updated: 2023/10/11 11:11:27 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
    int value;
    static const int fraction = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &old);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed &operator=(const Fixed &old);
};


#endif