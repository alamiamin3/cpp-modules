/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:11:25 by aalami            #+#    #+#             */
/*   Updated: 2023/12/06 16:11:28 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : target(target)
{
    to_sign = 145;
    to_exc = 137;
    is_signed = false;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
    *this = obj;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    if (this == &obj)
        return (*this);
    name  = obj.name;
    is_signed = obj.is_signed;
    to_sign = obj.to_sign;
    to_exc = obj.to_exc;
    target = obj.target;
    return (*this);
}
void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    
    if (is_signed && executor.getGrade() <= to_exc)
    {
        std::string fn = target + "__shrubbery";
        std::ofstream out;
        out.open(fn.c_str());
        if (!out.is_open())
        {
            std::cerr<<"Error: file can not be opened"<<std::endl;
            return ;
        }
        out<<"          .     .  .      +     .      .          ."<<std::endl;
        out<<"     .       .      .     #       .           ."<<std::endl;
        out<<"        .      .         ###            .      .      ."<<std::endl;
        out<<"      .      .   '#:. .:##'##:. .:#'  .      ."<<std::endl;
        out<<"         .      . '####'###'####'  ."<<std::endl;
        out<<"      .     '#:.    .:#'###'#:.    .:#'  .        .       ."<<std::endl;
        out<<"  .             '#########'#########'        .        "<<std::endl;
        out<<"        .    '#:.  '####'###'####'  .:#'   .       ."<<std::endl;
        out<<"     .     .  '#######''##'##''#######'                  ."<<std::endl;
        out<<"                .'##'#####'#####'##'           .      ."<<std::endl;
        out<<"   .   '#:. ...  .:##'###'###'##:.  ... .:#'     ."<<std::endl;
        out<<"     .     '#######'##'#####'##'#######'      .     ."<<std::endl;
        out<<"   .    .     '#####''#######''####'    .      ."<<std::endl;
        out<<"            .     '      000      '    .     ."<<std::endl;
        out<<"       .         .   .   000     .        .       ."<<std::endl;
        out<<".. .. ..................O000O........................ ...... ..."<<std::endl;
    }
    else
        throw GradeTooLowException();
}