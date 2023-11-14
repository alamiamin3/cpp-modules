/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:53:19 by aalami            #+#    #+#             */
/*   Updated: 2023/10/20 16:47:24 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string    getOutFileName(std::string arg)
{
    std::string ext = ".replace";
    return (arg + ext);
}

int     getOccurenceNumber(std::string& line, std::string s1)
{
    int i = 0;
    size_t occ = line.find(s1);
    if (occ != std::string::npos)
    {
        i++;
        while (occ != std::string::npos)
        {
            occ = line.find(s1, occ + s1.size());
            i++;
        }
    }
    return(i);
}

std::string replaceOccurence(std::string &line, std::string s1, std::string s2)
{
    int i = 0;
    int j = 0;
    std::string new_str;
    
    int occ_nbr = getOccurenceNumber(line, s1);
    size_t occ;
    if (!occ_nbr)
        return (line);
    else
    {
        occ = line.find(s1);
        while(line[i])
        {
            if (occ != std::string::npos && (size_t)i == occ)
            {
                while(s2[j])
                {
                    new_str.push_back(s2[j]);
                    j++;
                }
                i = occ + s1.size();
                occ = line.find(s1, i);
                j=0;
            }
            else
            {
                new_str.push_back(line[i]);
                i++;
            }
        }
        return (new_str);
    }
}

int copyContent(std::string fn, std::string s1, std::string s2)
{
    std::ifstream in;
    std::string out_file;
    std::ofstream out;
    std::string line;
    int i = 0;
    out_file = getOutFileName(fn);
    in.open(fn);
    if (!in.is_open())
    {
        std::cout<<"Error: file can not be opened"<<std::endl;
        return (0);
    }
    out.open(out_file);
    if (!out.is_open())
    {
        std::cout<<"Error: file can not be opened"<<std::endl;
        return (0);
    }
    getline(in, line, '\0');
    if (!in)
        std::cout<<"Error: Empty File"<<std::endl;
    else
    {
        line = replaceOccurence(line, s1, s2);
        out<<line;
        i = 1;
    }
    in.close();
    out.close();
    return (i);
}  