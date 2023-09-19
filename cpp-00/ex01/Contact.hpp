/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:19:18 by aalami            #+#    #+#             */
/*   Updated: 2023/09/19 18:19:19 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    void    setFirstName(std::string input);
    void    setLastName(std::string input);
    void    setNickName(std::string input);
    void    setPhone(std::string input);
    void    setDarkestSecret(std::string input);
    std::string    getFirstName();
    std::string    getLastName();
    std::string    getNickName();
    std::string    getPhone();
    std::string    getDarkestSecret();
    Contact(void);
};

#endif