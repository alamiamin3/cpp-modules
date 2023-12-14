#include <iostream>

int main() {
    try
    {
    int x = 5;

    assert(x == 5);  // This assertion is true, so nothing happens

    x = 10;
    if (x != 5)
        throw std::out_of_range("out of range");

    return 0;
        /* code */
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
