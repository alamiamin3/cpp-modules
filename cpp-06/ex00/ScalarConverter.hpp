/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:24:29 by aalami            #+#    #+#             */
/*   Updated: 2023/12/08 11:20:18 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <limits.h>
#include <float.h>
#include <cmath>

class ScalarConverter
{
private:
    ScalarConverter();
public:
    ~ScalarConverter();
    // ScalarConverter(const ScalarConverter &obj);
    // ScalarConverter &operator=(const ScalarConverter &obj);
    static void convert(const std::string &param);
};


#endif