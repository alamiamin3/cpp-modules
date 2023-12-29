
#include "Array.hpp"

#define MAX_VAL 5

int main()
{
    try
    {
        Array<std::string> strings(MAX_VAL);
        Array<int> a;
        Array<int> x = a;

        std::string *str_ptr = new std::string[MAX_VAL];
        for (int i = 0; i <  MAX_VAL ; i++)
        {
            str_ptr[i] = "HELLO";
            strings[i] = "HELLO";
        }
        try
        {
            strings[5] = "helllo";
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        for (int i = 0; i <  MAX_VAL ; i++)
        {
            std::cout<< "str_ptr["<<i<<"] =  "<<str_ptr[i]<<"    ";
            std::cout<< "strings["<<i<<"] =  "<<strings[i]<<std::endl;
        }
        delete [] str_ptr;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}