/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:49:01 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/05 12:10:33 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("RRF", 72, 45)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: Form("RRF", 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
: Form(copy.getName(), 72, 45)
{
	*this = copy;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &target)
{
	Form::operator=(target);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "SSSCCCCCVEEEEEEEEERRRRLLL" << std::endl;
	if ((rand() % 100) > 50)
		std::cout << target << " has been robotomized successfully!!!" << std::endl;
	else
		std::cout << target << " robotomized failed." << std::endl;
}
