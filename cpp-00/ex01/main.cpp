/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:54:13 by aalami            #+#    #+#             */
/*   Updated: 2023/09/17 22:31:19 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <iomanip>
#include <string.h>
#include "PhoneBook.hpp"
#include "Contact.hpp"
std::string   get_command()
{
    std::string str ;
    std::cout << "ENTER A COMMAND : ";
    std::getline(std::cin, str);
    if (str.empty())
    {
        std::cout << "Field can't be empty, Please Try Again !!" << std::endl;
        str = get_command();
    }
    else if (str != "ADD" && str != "SEARCH" && str != "EXIT")
    {
        std::cout << "Invalid Command try with ADD, SAERCH or EXIT. Please Try Again !!" << std::endl;
        str = get_command();
    }
    return (str);
}

int main()
{
    std::string str ;
      std::cout << std::setw(100);
  std::cout << 77 << std::endl;
  return 0;
    PhoneBook phonebook;
    std::cout<<std::endl;
    std::cout<<"/* ************************************************************************** */"<<std::endl;
    std::cout<<"/*                                                                            */"<<std::endl;
    std::cout<<"/*                 WELCOME TO THE AWESOME PHONEBOOK                           */"<<std::endl;
    std::cout<<"/*                                                                            */"<<std::endl;
    std::cout<<"/*  USAGE : THE PROGRAM ACCEPT 3 DIFFERENT COMMANDS [ADD],[SEARCH] or [EXIT]: */"<<std::endl;
    std::cout<<"/*                                                                            */"<<std::endl;
    std::cout<<"/*  [ADD]: Add a contact to the phonebook                                     */"<<std::endl;
    std::cout<<"/*                                                                            */"<<std::endl;
    std::cout<<"/*  [SEARCH]: list all the contacts and search for a specific contact         */"<<std::endl;
    std::cout<<"/*                                                                            */"<<std::endl;
    std::cout<<"/*  [EXIT]: exit the program                                                  */"<<std::endl;
    std::cout<<"/*                                                                            */"<<std::endl;
    std::cout<<"/* ************************************************************************** */"<<std::endl;
    std::cout<<std::endl;
    
    while (1)
    {
      str = get_command();
      if (str == "ADD")
        phonebook.addUser();
      else if (str == "SEARCH")
        phonebook.searchForUser();
      else
        std :: cout << "soon" << std::endl;
    }
    

}