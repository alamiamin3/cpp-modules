#include <iostream>

char    upper_case(char c)
{
    return (c - 32);
}

void    print_upper_arg(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            std::cout<<upper_case(str[i]);
        else
            std::cout<<str[i];
        i++;
    }
}

void    megaphone(char **argv)
{
    int i = 0;

    while (argv[++i])
        print_upper_arg(argv[i]);
    std::cout<<std::endl;
}

int main(int argc, char **argv)
{
    if (argc > 1)
        megaphone(argv);
    else
    std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
}
