/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:08:26 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/04 13:35:22 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat dobby("Dobby", 16);
		std::cout << dobby << std::endl;

		Form form1("Form1", 15, 3);
		std::cout << form1 << std::endl;
		dobby.signForm(form1);
		dobby.highGrade();

		std::cout << dobby << std::endl;
		dobby.signForm(form1);
		std::cout << form1 << std::endl;
		dobby.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form form("Form", 0, 3);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form form("Form", 1, 151);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
