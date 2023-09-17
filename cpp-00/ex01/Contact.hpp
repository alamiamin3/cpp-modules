#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
class Contact
{
// private:
public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    void    setFirstName(std::string input);
    void    setLastName(std::string input);
    void    setNickName(std::string input);
    void    setPhone(std::string input);
    int     isValidPhone(std::string input);
    void    setDarkestSecret(std::string input);
    Contact(void);
};

#endif