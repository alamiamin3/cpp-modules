/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:51:15 by aalami            #+#    #+#             */
/*   Updated: 2023/12/24 01:15:34 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

typedef std::multimap<std::string,std::string>::iterator mmap_it;
typedef std::map<std::string,double>::iterator map_it;
void getInput(std::ifstream &input, char *arg);
bool isValidInput(std::ifstream &input, char *arg);
bool isValidKey(const std::string &key);
std::map<std::string, double> getDataBaseMap();
void getThePrice(std::map<std::string, double>  &dbMap, std::string &key, std::string &value);
#endif