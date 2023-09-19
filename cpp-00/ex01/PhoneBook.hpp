/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:19:52 by aalami            #+#    #+#             */
/*   Updated: 2023/09/19 18:19:57 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iomanip>
#include <string>

class PhoneBook
{
private:
    Contact contacts[8];
    int index;
public:
    std::string    get_input(int flag, std::string msg);
    std::string getTruncedString(std::string input);
    std::string   get_command();
    std::string trim_input(std::string str);
    void    addUser();
    void    searchForUser();
    void    exitFunction();
    int     isValidNumber(std::string input);
    int get_index(std::string input);
};

#endif