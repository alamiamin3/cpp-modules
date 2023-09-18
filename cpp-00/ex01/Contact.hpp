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
    std::string    getFirstName();
    std::string    getLastName();
    std::string    getNickName();
    std::string    getPhone();
    std::string    getDarkestSecret();
    void    setLastName(std::string input);
    void    setNickName(std::string input);
    void    setPhone(std::string input);
    int     isValidPhone(std::string input);
    void    setDarkestSecret(std::string input);
    Contact(void);
};

#endif