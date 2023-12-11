/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:37:17 by aalami            #+#    #+#             */
/*   Updated: 2023/12/05 17:43:57 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string target;
public:
    RobotomyRequestForm(const std::string &target);
    ~RobotomyRequestForm(){}
    RobotomyRequestForm(const RobotomyRequestForm &obj);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
    void execute(const Bureaucrat &executor) const;
};

#endif