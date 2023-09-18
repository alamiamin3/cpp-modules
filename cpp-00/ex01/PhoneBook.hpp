#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iomanip>
#include <string>

class PhoneBook
{
private:
    Contact contacts[8];
public:
    std::string    get_input(int flag, std::string msg);
    void    addUser();
    void    searchForUser();
    void    exitFunction();
    std::string getTruncedString(std::string input);
    static int     isValidNumber(std::string input);
    long long get_index(std::string input);
};

#endif