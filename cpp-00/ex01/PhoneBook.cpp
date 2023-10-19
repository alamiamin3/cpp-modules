/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:04:28 by aalami            #+#    #+#             */
/*   Updated: 2023/10/18 18:13:54 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string PhoneBook::get_input(int flag, std::string msg)
{
    std :: cout << msg;
    std::string str;
    std::getline(std::cin, str);
    if (!std::cin)
        exit (0);
    str = PhoneBook::trim_input(str);
    if (str.empty())
    {
        std::cout << std::endl << "Field can't be empty, Please Try Again !!" << std::endl<< std::endl;
        str = get_input(flag, msg);
    }
    else if (flag == 1)
    {
        if (!PhoneBook::isValidNumber(str))
        {
            std::cout << std::endl << "Invalid Phone Number, Please Try Again !!" << std::endl<<std::endl;
            str = get_input(flag, msg);
        }
            
    }
    else if (flag == 2)
    {
        if (!PhoneBook::isValidNumber(str))
        {
            std::cout << "Invalid Index, index should be in [0-7] range . Please Try Again !!" << std::endl;
            str = get_input(flag, msg);
        }
        else if (str.size() != 1 || PhoneBook::get_index(str) > 7)
        {
            std::cout << "Index out of range, index should be in [0-7] range . Please Try Again !!" << std::endl;
            str = get_input(flag, msg);
        }
        else
            this->index = PhoneBook::get_index(str);
    }
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
    std::cout << std::endl;
    //set first name
    str = PhoneBook::get_input(0, "ENTER THE FIRST NAME : ");
    std::cout << std::endl;
    this->contacts[i].setFirstName(str);
    
    //set last name
    str = PhoneBook::get_input(0, "ENTER THE LAST NAME : ");
    std::cout << std::endl;
    this->contacts[i].setLastName(str);
    
    //set nickname
    str = PhoneBook::get_input(0, "ENTER THE NICK NAME : ");
    std::cout << std::endl;
    this->contacts[i].setNickName(str);
    
    //set phone
    str = PhoneBook::get_input(1, "ENTER THE PHONE NUMBER : ");
    std::cout << std::endl;
    this->contacts[i].setPhone(str);
    
    //set secret
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
    std::cout <<  std::setw(10) << std::right << "Index" ;
    std::cout << "| ";
    std::cout <<  std::setw(10) << std::right << "First Name" ;
    std::cout << "| ";
    std::cout <<  std::setw(10) << std::right << "Last Name" ;
    std::cout << "| ";
    std::cout <<  std::setw(10) << std::right << "Nick Name";
    std::cout << "| " << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------------" << std::endl;
    while (i < 8 && this->contacts[i].getFirstName().size())
    {
        std::cout <<  std::setw(10) << std::right << i ;
        std::cout << "| ";
        std::cout <<  std::setw(10) << std::right << getTruncedString(this->contacts[i].getFirstName());
        std::cout << "| ";
        std::cout <<  std::setw(10) << std::right << getTruncedString(this->contacts[i].getLastName());
        std::cout << "| ";
        std::cout <<  std::setw(10) << std::right << getTruncedString(this->contacts[i].getNickName());
        std::cout << "| " << std::endl;
        i++;
    }
    if (i == 0)
        std::cout << std::endl << "EMPTY PHONEBOOK ! PLEASE ADD A USER, AND TRY AGAIN" << std::endl;
    else
    {
        std::cout << std::endl;
        str = PhoneBook::get_input(2, "ENTER THE INDEX TO GET ALL THE INFORMATIONS :");
        if (this->contacts[this->index].getFirstName().size() != 0)
        {
            std::cout << std::endl;
            std::cout << "First Name : " << this->contacts[this->index].getFirstName() << std :: endl;
            std::cout << std::endl;
            std::cout << "Last Name : " << this->contacts[this->index].getLastName() << std :: endl;
            std::cout << std::endl;
            std::cout << "Nick Name : " << this->contacts[this->index].getNickName() << std :: endl;
            std::cout << std::endl;
            std::cout << "Phone Number : " << this->contacts[this->index].getPhone() << std :: endl;
            std::cout << std::endl;
            std::cout << "Darkest Secret : " << this->contacts[this->index].getDarkestSecret() << std :: endl;
            std::cout << std::endl;
        }
        else
            std::cout << std::endl << "THERE IS NO CONTACT ASSOCIATED TO THIS INDEX"<< std::endl << std::endl;
    }
}

void    PhoneBook::exitFunction()
{
    std::cout << std::endl << "SEE YOU NEXT TIME ;)"<< std::endl << std::endl;
    exit (0);
}

int PhoneBook::get_index(std::string input)
{
    int index;
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

std::string PhoneBook::trim_input(std::string str)
{
  int  i = 0;
  int  j = 0;
  std::string ret = "";
  while (str[i] && isspace(str[i]))
    i++;
  if (str[i] == '\0')
    return (ret);
  else
  {
    j = str.length() - 1;
    while(isspace(str[j]))
      j--;
    ret = str.substr(i, j - i + 1);
    return(ret);
  }
}

std::string   PhoneBook::get_command()
{
    std::string str ;
    std::cout << "ENTER A COMMAND : ";
    std::getline(std::cin, str);
    str = PhoneBook::trim_input(str);
    if (str.empty())
    {
        if (!std::cin)
            exit (0);
        std::cout << "Field can't be empty, Please Try Again !!" << std::endl;
        str = get_command();
        
    }
    else if (str != "ADD" && str!= "SEARCH" && str != "EXIT")
    {
        std::cout << "Invalid Command try with ADD, SAERCH or EXIT. Please Try Again !!" << std::endl;
        str = get_command();
    }
    return (str);
}

