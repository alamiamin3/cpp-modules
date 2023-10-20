/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:51:38 by aalami            #+#    #+#             */
/*   Updated: 2023/10/20 16:05:59 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP
#include <iostream>
#include <fstream>

std::string    getOutFileName(std::string arg);
int copyContent(std::string fn, std::string s1, std::string s2);
std::string replaceOccurence(std::string &line, std::string s1, std::string s2);
int     getOccurenceNumber(std::string& line, std::string s1);
std::string    getOutFileName(std::string arg);
#endif