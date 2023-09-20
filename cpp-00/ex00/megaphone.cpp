/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:53:58 by aalami            #+#    #+#             */
/*   Updated: 2023/09/17 14:53:58 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    print_upper_arg(std::string str)
{
    int i = 0;

    while (str[i])
    {
        if (islower(str[i]))
            std::cout<<(char)toupper(str[i]);
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
