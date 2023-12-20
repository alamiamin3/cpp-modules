/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:46:18 by aalami            #+#    #+#             */
/*   Updated: 2023/12/19 21:08:31 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

Base *generate(void)
{
    Base *ptr;
    std::srand(time(0));
    int randomNumber = rand() % 3;
    if (randomNumber == 0)
        ptr = new A;
    else if (randomNumber == 1)
        ptr = new B;
    else
        ptr = new C;
    return (ptr);
}
void identify(Base *p)
{
    A *a_ptr = dynamic_cast<A*>(p);
    B *b_ptr = dynamic_cast<B*>(p);
    C *c_ptr = dynamic_cast<C*>(p);
    if (a_ptr)
        std::cout<<"A"<<std::endl;
    else if (b_ptr)
        std::cout<<"B"<<std::endl;
    else if (c_ptr)
        std::cout<<"C"<<std::endl;
    else
        std::cout<<"error"<<std::endl;
    
}
void identify(Base &p)
{
    try
    {
        A &a_ref = dynamic_cast<A&>(p);
        std::cout<<"A"<<std::endl;
        (void)a_ref;
    }
    catch(const std::exception& e)
    {
        try
        {
            B &b_ref = dynamic_cast<B&>(p);
            std::cout<<"B"<<std::endl;
            (void)b_ref;
        }
        catch(const std::exception& e)
        {
            try
            {
                C &c_ref = dynamic_cast<C&>(p);
                std::cout<<"C"<<std::endl;
                (void)c_ref;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what()<< " : [can't be casted] "<< std::endl;
            }
        }
    }
}