/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:03:40 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/10 18:10:06 by tfarenga         ###   ########.fr       */
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

void Cast::getDouble(void)
{
	std::cout << "double: ";

	try
	{
		double dbl = 0;
		dbl = std::stod(newType);

		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(dbl) << std::endl;
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

void Cast::getChar(void)
{
	std::cout << "char: ";
	int str;

	try
	{
		str = std::stoi(newType);

		if (str > 32 && str < 127)
			std::cout << "'" << static_cast<char>(str) << "'" << std::endl;
		else
		{
			std::cout << "Non displayable" << std::endl;
			return ;
		}
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "out of range" << std::endl;
	}
}
