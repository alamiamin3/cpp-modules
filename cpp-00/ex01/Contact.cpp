/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:07:25 by aalami            #+#    #+#             */
/*   Updated: 2023/09/17 21:19:08 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string input)
{
    this->first_name = input;
}

void Contact::setLastName(std::string input)
{
    this->last_name = input;
}

void Contact::setNickName(std::string input)
{
    this->nickname = input;
}

void Contact::setPhone(std::string input)
{
    this->phone_number = input;
}

void Contact::setDarkestSecret(std::string input)
{
    this->darkest_secret = input;
}

int Contact::isValidPhone(std::string input)
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

Contact::Contact()
{
    this->first_name = "";
    this->last_name = "";
    this->nickname = "";
    this->phone_number = "";
    this->darkest_secret = "";
}