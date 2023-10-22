/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:49:19 by aalami            #+#    #+#             */
/*   Updated: 2023/10/21 16:37:57 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
    private:
        std::string arr[100];
    public:
        Brain();
        Brain(const Brain &obj);
        Brain &operator=(const Brain &obj);
        ~Brain();
};
#endif