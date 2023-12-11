/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:38:54 by aalami            #+#    #+#             */
/*   Updated: 2023/12/11 16:54:47 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *ptr = new Data;

    ptr->a = 5;
    ptr->b = 'a';
    ptr->c = 3.14;
    ptr->str = "hello";
    uintptr_t tmp= Serializer::serialize(ptr);

    Data *tmp_ptr = Serializer::deserialize(tmp);

    std::cout<< "Address that ptr point to= ["<<ptr<<"]"<<std::endl;
    std::cout<< "Data pointed by ptr = ["<<ptr->a<<"  "<<ptr->b<<"  "<<ptr->c<<"  "<< ptr->str<<"]"<<std::endl;
    std::cout<< "Address that tmp_ptr point to= ["<<tmp_ptr<<"]"<<std::endl;
    std::cout<< "Data pointed by tmp_ptr = ["<<tmp_ptr->a<<"  "<<tmp_ptr->b<<"  "<<tmp_ptr->c<<"  "<< tmp_ptr->str<<"]"<<std::endl;
    
}