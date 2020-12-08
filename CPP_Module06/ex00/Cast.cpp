/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:03:40 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/08 19:31:40 by tfarenga         ###   ########.fr       */
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
	// if (newType.length() == 1 && isprint(newType[0]) && !isdigit(newType[0]))
	// 		std::cout << "int: " << static_cast<int>(newType[0]) << std::endl;
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
	// if (newType.length() == 1 && isprint(newType[0]) && !isdigit(newType[0]))
	// 		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(newType[0]) << "f" << std::endl;
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

	// if (newType.length() == 1 && isprint(newType[0]) && !isdigit(newType[0]))
	// 		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(newType[0]) << std::endl;

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

	// if (newType.length() == 1 && isprint(newType[0]) && !isdigit(newType[0]))
	// 	std::cout << "char: " << "'" << newType[0] << "'" << std::endl;

	try
	{
		str = std::stoi(newType);

		if (str > 32 && str < 127)
			std::cout << "'" << static_cast<char>(str) << "'" << std::endl;
		else
		{
			std::cout << "impossible~" << std::endl;
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