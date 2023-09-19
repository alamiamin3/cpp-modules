/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:54:13 by aalami            #+#    #+#             */
/*   Updated: 2023/09/19 15:58:17 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <iomanip>
#include <string.h>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    std::string str ;
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
      str = phonebook.get_command();
      if (str == "ADD")
        phonebook.addUser();
      else if (str == "SEARCH")
        phonebook.searchForUser();
      else
       phonebook.exitFunction();
    }
}