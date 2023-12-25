/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:51:06 by aalami            #+#    #+#             */
/*   Updated: 2023/12/24 15:40:33 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isValidInput(std::ifstream &input, char *arg)
{
    input.open(arg);
    if (!input.is_open())
        throw "file can't be opened";
    std::string buff;
    getline(input, buff);
    bool ret = true;
    if (buff.compare("date | value"))
    {
        std::cerr<<"Header invalid"<<std::endl;
        ret = false;
    }
    input.close();
    return ret;
}
bool isValidDate(std::string &date, bool flag)
{
    size_t fpos = date.find_first_not_of(" \t");
    for(size_t i = 0; i < date.size(); i++)
    {
        if((!isdigit(date[i]) && flag)  || (!flag && fpos != 0))
            return (false);
    }
    return (true);
}
bool isValidYear(std::stringstream &stream, std::string &key)
{
    if (key.size() != 4)
        return false;
    long year = atol(key.c_str());
    if (!isValidDate(key, 1) || stream.eof() || year < 2009)
        return false;
    return true;
}

bool isValidMounth(std::stringstream &stream, std::string &key)
{
    if (key.size() != 2)
        return false;
    long mounth = atol(key.c_str());
    if (!isValidDate(key, 1) || stream.eof() || (mounth < 1 || mounth > 12))
        return false;
    return true;
}

void trimString(std::string &str)
{
    size_t first = str.find_first_not_of(" ");
    size_t last = str.find_last_not_of(" ");
    str = str.substr(first, last - first + 1);
}
bool isValidDay(std::string &key, bool isLeap, int isLong)
{
    size_t first = key.find_first_not_of(" \t");
    size_t space = key.find(' ');
    if (key.size() != 3 || first != 0 || space == std::string::npos || space != 2)
        return false;
    size_t pos = key.find(" ");
    long day = atol(key.c_str());
    if (!isValidDate(key, 0) || pos == std::string::npos || (day < 1 || day > 31))
        return false;
    else if((!isLeap && isLong == -1 && day == 29) || (isLong == -1 && day > 29))
        return false;
    else if (!isLong && day == 31)
        return false;
    return true;
}
bool    isLeapYear(std::string &key)
{
    long year = atol(key.c_str());
    return ((year % 4 == 0 && year % 100 != 0) ||  year % 400 == 0);
}
int    isLongMounth(std::string &key)
{
    long mounth = atol(key.c_str());
    switch (mounth)
    {
        case 1: case 3: case 5: case 7:case 8:case 10:case 12:
            return 1;
        case 2:
            return -1;    
        default:
            return 0;
    }
}
bool isValidKey(std::string &key)
{
    std::stringstream stream (key);
    std::string tmp;
    bool isLeap;
    int isLong;
    
    if (key < "2009-01-02")
        return false;
    int i = 0;
    while (i < 3)
    {
        getline(stream, tmp, '-');
        if (i == 0)
        {
            if (!isValidYear(stream, tmp))
                return false;
            isLeap = isLeapYear(tmp);
        }
        else if (i == 1)
        {
            if (!isValidMounth(stream, tmp))
                return false;
            isLong = isLongMounth(tmp);
        }
        i++;
    }
    return (isValidDay(tmp, isLeap, isLong));
    
}
bool isValidFloat( std::string &value)
{
    char *check;
    std::string tmp;
    double f_value = strtod(value.c_str(), &check);
    tmp = check;
    if (tmp.size())
    {
        value = "not a number";
        return false;
    }
    else if (f_value > 1000)
    {
        value = "too large a number.";
        return false;
    }
    return (true);
}
bool isValidNumber(std::string &value)
{
    size_t first = value.find_first_not_of(" \t");
    size_t last = value.find_last_not_of(" \t");
    if (!first || (value[1] != '-' &&!isdigit(value[1]))
        || last != value.size() - 1)
    {
        value = "input value not valid"; 
        return false;
    }
    trimString(value);
    for(unsigned int i = 0; i < value.size(); i++)
    {
        if ( i != 0 && !isdigit(value[i]) && value[i] != '.')
        {
            value = "not a number";
            return false;
        }
    }
    if (atol(value.c_str()) > 1000)
    {
        value = "too large a number.";
        return false;
    }
    else if (value[0] == '-')
    {
        value = "not a positive number.";
        return false;
    }
    return (isValidFloat(value));
}

bool isValidValue( std::string &value)
{
    return (isValidNumber(value));
}
void getInput(std::ifstream &input, char *arg)
{
    std::map<std::string, double> dbMap = getDataBaseMap();
    std::string line;
    std::string key;
    std::string value;
    input.open(arg);
    if (!input.is_open())
        throw "file can't be opened";
    getline(input, line);
    while (getline(input, line))
    {
        std::stringstream tmp (line);
        if (getline(tmp, key, '|') && getline(tmp, value))
        {
            if (!isValidKey(key))
                value = "Error: bad input";
            else if (!isValidNumber(value))
                value = "Error: " + value;
            trimString(key);
        }
        else
            value = "Error: Bad input";
        getThePrice(dbMap, key, value);
    }
    input.close();
}

std::map<std::string, double> getDataBaseMap()
{
    std::ifstream input;
    std::string line;
    std::string key;
    std::string value;
    std::map<std::string, double> myMap;
    input.open("data.csv");
    if (!input.is_open())
        throw "Error opening database";
    getline(input, line);
    while(getline(input, line))
    {
        std::stringstream tmp(line);
        if (getline(tmp, key, ',') && getline(tmp, value))
            myMap[key] = atof(value.c_str());
        else
            throw "Database updated";
    }
    return myMap;
}

void getThePrice(std::map<std::string, double>  &dbMap, std::string &key, std::string &value)
{
    map_it mapIt= dbMap.lower_bound(key);
    if (!value.compare("Error: Bad input"))
        std::cout<<value<<" => "<<key;
    else if (value.find("Error") != std::string::npos)
        std::cout<<value;
    else
    {
        std::cout<<key<<" => ";
        if (mapIt->first.compare(key))
            mapIt--;
        std::cout<<value<<" = "<<mapIt->second * atof(value.c_str());
    }
    std::cout<<std::endl;
}