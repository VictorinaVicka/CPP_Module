/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:03:40 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/08 16:48:57 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

Cast::Cast()
{}

Cast::~Cast()
{}

Cast::Cast(std::string type) : newType(type)
{}

Cast &Cast::operator=(const Cast &target)
{
	newType = target.newType;
	return (*this);
}

void	Cast::getInt(void)
{
	std::cout << "int: ";
	try
	{
		std::cout << std::stoi(newType) << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "out of range" << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "invalid argument" << std::endl;
	}
}