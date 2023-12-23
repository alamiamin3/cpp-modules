/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:51:15 by aalami            #+#    #+#             */
/*   Updated: 2023/12/23 04:34:35 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

typedef typename std::multimap<std::string,std::string>::iterator mmap_it;
typedef typename std::map<std::string,unsigned int>::iterator map_it;
std::multimap<std::string, std::string> getInput(std::ifstream &input, char *arg);
bool isValidInput(std::ifstream &input, char *arg);
bool isValidKey(const std::string &key);
std::map<std::string, unsigned int> getDataBaseMap();
void getThePrice(std::multimap<std::string, std::string> inputMap, std::ifstream &input, char *arg);
#endif