/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:06:24 by aalami            #+#    #+#             */
/*   Updated: 2023/10/22 14:31:56 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout<<"[ DEBUG ]"<<std::endl;
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do"<<std::endl<<std::endl;
}

void    Harl::info(void)
{
    std::cout<<"[ INFO ]"<<std::endl;
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"<<std::endl<<std::endl;;
}

void    Harl::warning(void)
{
    std::cout<<"[ WARNING ]"<<std::endl;
    std::cout<<"I think I deserve to have some extra bacon for free."<<std::endl<<"I've been coming for years whereas you started working here since last month."<<std::endl<<std::endl;;
}

void    Harl::error(void)
{
    std::cout<<"[ ERROR ]"<<std::endl;
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl<<std::endl;;
}

void    Harl::complain(std::string level)
{
    if (level.compare("DEBUG") && level.compare("WARNING") && level.compare("INFO") && level.compare("ERROR"))
    {
        std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
        return ;
    }
    else
    {
        switch (level[0])
        {
        case ('D'):
            this->debug();
        case ('I'):
            this->info();
        case ('W'):
            this->warning();
        case ('E'):
            this->error();
        default:
            break;
        }
    }
}