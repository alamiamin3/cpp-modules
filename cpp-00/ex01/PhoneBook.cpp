/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:04:28 by aalami            #+#    #+#             */
/*   Updated: 2023/09/17 22:26:54 by aalami           ###   ########.fr       */
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
    else if (flag)
    {
        if (!PhoneBook::isValidPhone(str))
        {
            std::cout << "Invalid Phone Number, Please Try Again !!" << std::endl;
            str = get_input(flag, msg);
        }
            
    }
    return (str);
}

int PhoneBook::isValidPhone(std::string input)
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
    while (i < 8 && this->contacts[i].first_name.size())
    {
        std :: cout << " Index [" << i <<"] | " << this->contacts[i].first_name << "| " << this->contacts[i].last_name << std ::endl;
        i++;
    }
    if (i == 0)
        std::cout << "EMPTY PHONEBOOK ! PLEASE ADD A USER, AND TRY AGAIN" << std::endl;
}

