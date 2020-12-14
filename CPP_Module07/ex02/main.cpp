/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 13:55:24 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/14 16:47:36 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> arrey;

	Array<int> x1(3);
	arrey = x1;

	for (unsigned int i = 0; i < arrey.size(); i++)
	{
		arrey[i] = i;
		std::cout << arrey[i] << std::endl;
	}
	std::cout << "<<<<<<<<<>>>>>>>>>>" << std::endl;

	Array<int> arreyCopy(arrey);
	for (unsigned int i = 0; i < arreyCopy.size(); i++)
	{
		arreyCopy[i] = i;
		std::cout << arreyCopy[i]  << std::endl;
	}
	std::cout << "<<<<<<<<<>>>>>>>>>>" << std::endl;

	Array<std::string> x3(3);
	for (unsigned int i = 0; i < x3.size(); i++)
	{
		x3[i] = 'a' + i;
		std::cout << x3[i] << std::endl;
	}
	std::cout << "<<<<<<<<<>>>>>>>>>>" << std::endl;

	try
	{
		std::cout << arrey[-1] << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<<<<<<<<<>>>>>>>>>>" << std::endl;

	try
	{
		std::cout << arrey[4] << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
