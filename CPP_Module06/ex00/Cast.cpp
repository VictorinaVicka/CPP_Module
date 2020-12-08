/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:03:40 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/08 18:00:14 by tfarenga         ###   ########.fr       */
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
		std::cout << "impossible" << std::endl;
	}
}

void Cast::getFloat(void)
{
	std::cout << "float: ";
	try
	{
		float flt = 0;
		flt = std::stof(newType);
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(flt) << "f" << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "out of range" << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "impossible" << std::endl;
	}
}