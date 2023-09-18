/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:04:28 by aalami            #+#    #+#             */
/*   Updated: 2023/09/18 12:26:57 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string PhoneBook::get_input(int flag, std::string msg)
{
    std :: cout << msg;
    std::string str;
    std::getline(std::cin, str);
    if (str.empty())
    {
        std::cout << "Field can't be empty, Please Try Again !!" << std::endl;
        str = get_input(flag, msg);
    }
    else if (flag == 1)
    {
        if (!PhoneBook::isValidNumber(str))
        {
            std::cout << "Invalid Phone Number, Please Try Again !!" << std::endl;
            str = get_input(flag, msg);
        }
            
    }
    // else if (flag == 2)
    // {
    //     if (!PhoneBook::isValidNumber(str))
    //     {
    //         std::cout << "Invalid Index, Please Try Again !!" << std::endl;
    //         str = get_input(flag, msg);
    //     }
    //     else if ()
    // }
    return (str);
}

int PhoneBook::isValidNumber(std::string input)
{
    int i = 0;

    while (input[i])
    {
        if (!isdigit(input[i]))
            return (0);
        i++;
    }
    return(1);
}

void    PhoneBook::addUser()
{
    static int i = 0;
    int flag = 0;
    std::string str;

    if (i == 8)
    {
        flag = 1;
        i = 0;
    }
    str = PhoneBook::get_input(0, "ENTER THE FIRST NAME : ");
    std::cout << std::endl;
    this->contacts[i].setFirstName(str);
    str = PhoneBook::get_input(0, "ENTER THE LAST NAME : ");
    std::cout << std::endl;
    this->contacts[i].setLastName(str);
    str = PhoneBook::get_input(0, "ENTER THE NICK NAME : ");
    std::cout << std::endl;
    this->contacts[i].setNickName(str);
    str = PhoneBook::get_input(1, "ENTER THE PHONE NUMBER : ");
    std::cout << std::endl;
    this->contacts[i].setPhone(str);
    str = PhoneBook::get_input(0, "ENTER THE DARKEST SECRET : ");
    std::cout << std::endl;
    this->contacts[i].setDarkestSecret(str);
    if (!flag)
        i++;
}

void    PhoneBook::searchForUser()
{
    int i = 0;
    std::string str;
    std::cout << "-----------------------------------------------------------------------------------------------" << std::endl;
    std::cout <<  std::setw(20) << std::right << "Index" ;
    std::cout << "|";
    std::cout <<  std::setw(20) << std::right << "First Name" ;
    std::cout << "|";
    std::cout <<  std::setw(20) << std::right << "Last Name" ;
    std::cout << "|";
    std::cout <<  std::setw(20) << std::right << "Nick Name" << std::endl;
    while (i < 8 && this->contacts[i].getFirstName().size())
    {
        std::cout <<  std::setw(20) << std::right << i ;
        std::cout << "|";
        std::cout <<  std::setw(20) << std::right << getTruncedString(this->contacts[i].getFirstName());
        std::cout << "|";
        std::cout <<  std::setw(20) << std::right << getTruncedString(this->contacts[i].getLastName());
        std::cout << "|";
        std::cout <<  std::setw(20) << std::right << getTruncedString(this->contacts[i].getNickName()) << std::endl;
        i++;
    }
    if (i == 0)
        std::cout << std::endl << "EMPTY PHONEBOOK ! PLEASE ADD A USER, AND TRY AGAIN" << std::endl;
    else
    {
        str = PhoneBook::get_input(0, "ENTER THE INNDEX TO GET ALL THE INFORMATIONS :");
        
        std :: cout << PhoneBook::get_index(str) << "   num" << std::endl;
    }
}

long long PhoneBook::get_index(std::string input)
{
    long long index;
    // int i = 0;
    // while (input[i])
    // {
    //     if (!isdigit(input[i]))
            
    // }
    
    // while
    index = std::atoi(input.c_str());
    return (index);
}

std::string PhoneBook::getTruncedString(std::string input)
{
    std::string new_str;
    if (input.size() > 10)
    {
        new_str = input.substr(0,10);
        new_str[9] = '.';
    }
    else
        new_str = input;
    return (new_str);  
}
