/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:51:06 by aalami            #+#    #+#             */
/*   Updated: 2023/12/23 04:50:54 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isValidInput(std::ifstream &input, char *arg)
{
    input.open(arg);
    std::string buff;
    getline(input, buff);
    bool ret = true;
    if (buff.compare("date | value"))
        ret = false;
    input.close();
    return ret;
}

bool isValidYear(std::stringstream &stream, std::string &key)
{
    long year = atol(key.c_str());
    if (stream.eof() || year < 2009)
        return false;
    return true;
}

bool isValidMounth(std::stringstream &stream, std::string &key)
{
    long mounth = atol(key.c_str());
    if (stream.eof() || (mounth < 1 || mounth > 12))
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
    size_t pos = key.find(" ");
    long day = atol(key.c_str());
    if (pos == std::string::npos || (day < 1 || day > 31))
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
    size_t first = value.find_first_not_of(" ");
    if (!first)
        return false;
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
std::multimap<std::string, std::string> getInput(std::ifstream &input, char *arg)
{
    std::multimap<std::string, std::string> inputMap;
    
    std::string line;
    std::string key;
    std::string value;
    input.open(arg);
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
            inputMap.insert(std::make_pair(key, value));
            std::cout<<key.size()<<std::endl;
        }
        else
            inputMap.insert(std::make_pair(key, "Error: bad input"));
        
    }
    input.close();
    std::cout<<line<<std::endl;
    return (inputMap);
}
std::map<std::string, unsigned int> getDataBaseMap()
{
    std::ifstream input;
    std::string line;
    std::string key;
    std::string value;
    std::map<std::string, unsigned int> myMap;
    input.open("data.csv");
    getline(input, line);
    while(getline(input, line))
    {
        std::stringstream tmp(line);
        if (getline(tmp, key, ',') && getline(tmp, value))
            myMap[key] = static_cast<unsigned int>(atol(value.c_str()));
        else
        {
            std::cout<<"Database modified"<<std::endl;
            exit(1);
        }
        std::cout<<key<<"  "<<value<<std::endl; 
    }
    return myMap;
}
void getThePrice(std::multimap<std::string, std::string> inputMap, std::ifstream &input, char *arg)
{
    std::map<std::string, unsigned int> dbMap = getDataBaseMap();
    mmap_it mmapIt;
    map_it mapIt;
    input.open(arg);
    std::string line;
    std::string key;
    size_t pos;
    unsigned int price;
    getline(input, line);
    while(getline(input, line))
    {
        std::stringstream tmp(line);
        if (getline(tmp,key,'|'))
        {
            trimString(key);
            mmapIt = inputMap.find(key);
            mapIt = dbMap.lower_bound(key);
            if (mmapIt->second.find("Error") != std::string::npos)
            {
                std::cout<<mmapIt->first<<" => "<<mmapIt->second<<" = ";
                if (mapIt != dbMap.end() && mapIt->first.compare())
                    price = mapIt->second * atol(mmapIt->second.c_str());
                std::cout<<price<<std::endl;
            }
        }
    }
}