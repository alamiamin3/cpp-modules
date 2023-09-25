/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:07:46 by aalami            #+#    #+#             */
/*   Updated: 2023/09/25 23:42:13 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

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
            if (occ != std::string::npos && i == occ)
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
                std::cout<<new_str.size()<<std::endl;
        return (new_str);
    }
}

int copyContent(std:: ifstream& in, std:: ofstream& out, std::string& out_file, std::string s1, std::string s2)
{
    std::string line;
    int i = 0;
    out.open(out_file);
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

int main(int argc, char **argv)
{
    if (argc != 4)
        std::cout<<"Number of arguments invalid"<<std::endl;
    else if (!argv[2][0] || !argv[3][0])
        std::cout<<"Error: Empty string"<<std::endl;
    else
    { 
        std::ifstream in;
        std::string out_file;
        std::ofstream out;
        in.open(argv[1]);
        if (!in.is_open())
        {
            std::cout<<"Error: file can not be opened"<<std::endl;
            return (1);
        }
        else
        {
            out_file = getOutFileName(argv[1]);
            return (!copyContent(in, out, out_file, argv[2], argv[3]));
        }
    }
}