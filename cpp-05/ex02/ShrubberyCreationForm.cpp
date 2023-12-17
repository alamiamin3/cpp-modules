/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:54:34 by aalami            #+#    #+#             */
/*   Updated: 2023/12/17 14:44:32 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation Form", 145, 137), target("target")
{
}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("Shrubbery Creation Form", 145, 137), target(target)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : Form(obj.getName(), obj.getGradeToSign(), obj.getGradeToExec()), target(obj.target)
{
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    (void)obj;
    return (*this);
}
void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    
    if (this->getState() && executor.getGrade() <= this->getGradeToExec())
    {
        std::string fn = target + "_shrubbery";
        std::ofstream out;
        out.open(fn.c_str());
        if (!out.is_open())
            throw std::ios_base::failure("Error: file can not be opened");
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
        std::cout<<"A file named "<<fn<<" has been created"<<std::endl;
        out.close();
    }
    else
    {
        if (!this->getState())
            throw FormNotSigned();
        throw GradeTooLowException();
    }
}

