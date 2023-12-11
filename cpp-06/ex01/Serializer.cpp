/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:32:02 by aalami            #+#    #+#             */
/*   Updated: 2023/12/11 16:37:08 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data *ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}
Data *Serializer::deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}