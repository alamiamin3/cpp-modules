/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:02:49 by aalami            #+#    #+#             */
/*   Updated: 2023/12/19 15:52:12 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip> 

bool IsFloat(const std::string &param)
{
    std::string tmp = param;
    double d_num;
    char *check;
    if (param.size() > 1 && param[param.size() - 1] == 'f')
    {
        tmp[param.size() - 1] = 0;
        d_num = strtod(tmp.c_str(), &check);
        tmp = check;
        if (tmp.size())
            return(false);
        return(true);
    }
    return (false);
}

bool IsChar(const std::string &param)
{
    if (param.size() == 1 && isprint(param[0]))
        return (true);
    return (false);
}
bool IsInt(const std::string &param)
{
    for (size_t i = 0; i < param.size(); i++)
    {
        if (!isdigit(param[i]))
            return (false);
    }
    return (true);
}

bool IsDouble(const std::string &param)
{
    std::string tmp = param;
    double d_num;
    char *check;
    if (!IsInt(param))
    {
        d_num = strtod(tmp.c_str(), &check);
        tmp = check;
        if (tmp.size())
            return(false);
        return(true);
    }
    return (false);
}

void ConvertFromChar(char c)
{
    std::cout << "char: "<<c<<std::endl;
    std::cout << "int: "<<static_cast<int>(c)<<std::endl;
    std::cout << "float: "<<std::fixed<<std::setprecision(1)<<static_cast<float>(c)<<"f"<<std::endl;
    std::cout << "double: "<<std::fixed<<std::setprecision(1)<<static_cast<double>(c)<<std::endl;
}

void ConvertFromInt(long num)
{
    std::cout << "char: ";
    if (num >= 32 && num <= 126)
        std::cout<<"'"<<static_cast<char>(num)<<"'"<<std::endl;
    else
        std::cout<<"Non displayable"<<std::endl;
    if (std::numeric_limits<int>::max() < num || std::numeric_limits<int>::min() > num)
        std::cout<< "int: Impossible"<<std::endl;
    else
        std::cout << "int: "<<static_cast<int>(num)<<std::endl;
    std::cout << "float: "<<std::fixed<<std::setprecision(1)<<static_cast<float>(num)<<"f"<<std::endl;
    std::cout << "double: "<<std::fixed<<std::setprecision(1)<<static_cast<double>(num)<<std::endl;
}

void ConvertFromFloat(double num)
{
    std::cout << "char: ";
    if (static_cast<int>(num) >= 32 && static_cast<int>(num) <= 126)
        std::cout<<"'"<<static_cast<char>(num)<<"'"<<std::endl;
    else if (num == INFINITY || num == -INFINITY || num != num)
        std::cout<<"Impossible"<<std::endl;
    else
        std::cout<<"Non displayable"<<std::endl;
    if (std::numeric_limits<int>::max() < num || std::numeric_limits<int>::min() > num || num != num)
        std::cout<< "int: Impossible"<<std::endl;
    else
        std::cout << "int: "<<static_cast<int>(num)<<std::endl;
    if (num == INFINITY || num == -INFINITY || num != num)
    {
        if (num == INFINITY)
        {
            std::cout << "float: +"<<num<<"f"<<std::endl;
            std::cout << "double: +"<<num<<std::endl;
            return;
        }
        std::cout << "float: "<<num<<"f"<<std::endl;
        std::cout << "double: "<<num<<std::endl;
    }
    else
    {
        if (std::numeric_limits<float>::max() < num || std::numeric_limits<float>::max() * -1 > num)
            std::cout<< "float: Impossible"<<std::endl;
        else
            std::cout << "float: "<<std::fixed<<std::setprecision(1)<<num<<"f"<<std::endl;
        if (std::numeric_limits<double>::max() < num || std::numeric_limits<double>::max() * -1 > num)
            std::cout<< "double: Impossible"<<std::endl;
        else
            std::cout << "double: "<<std::fixed<<std::setprecision(1)<<num<<std::endl;
    }
}

void ScalarConverter::convert(const std::string &param)
{
    char toChar;
    double toFloat;
    long toInt;
    bool is_float = IsFloat(param);
    bool is_int = IsInt(param);
    bool is_double = IsDouble(param);
    bool is_char = IsChar(param);
    if (is_float || is_double)
    {
        toFloat = atof(param.c_str());
        ConvertFromFloat(toFloat);
    }
    else if (is_int)
    {
        toInt = atol(param.c_str());
        ConvertFromInt(toInt);
    }
    else if (is_char)
    {
        toChar = param[0];
        ConvertFromChar(toChar);
    }
    else
    {
        std::cout << "char: impossible"<<std::endl;
        std::cout << "int: impossible"<<std::endl;
        std::cout << "float: impossible"<<std::endl;
        std::cout << "double: impossible"<<std::endl;
    }
}