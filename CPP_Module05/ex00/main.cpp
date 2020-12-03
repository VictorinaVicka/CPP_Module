/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:08:26 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/03 17:49:17 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat dobby("Dobby", 0);
		std::cout << dobby << std::endl;
	}
	catch(const std::exception& exception)
	{
		std::cerr << exception.what() << std::endl;
	}

	try
	{
		Bureaucrat Dobby_1("Dobby_1", 1);
		std::cout << Dobby_1 << std::endl;
		Dobby_1.highGrade();
		std::cout << Dobby_1 << std::endl;
	}
	catch(const std::exception& exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	try
	{
		Bureaucrat Nick("Nick", 151);
		std::cout << Nick << std::endl;
	}
	catch(const std::exception& exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	try
	{
		Bureaucrat Nick_1("Nick_1", 140);
		std::cout << Nick_1 << std::endl;
		Nick_1.lowGrade();
		std::cout << Nick_1 << std::endl;
	}
	catch(const std::exception& exception)
	{
		std::cerr << exception.what() << std::endl;
	}
}
