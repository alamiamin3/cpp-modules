#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
public:
    std::string    get_input(int flag, std::string msg);
    void    addUser();
    void    searchForUser();
    void    exitFunction();
    static int     isValidPhone(std::string input);
};

#endif