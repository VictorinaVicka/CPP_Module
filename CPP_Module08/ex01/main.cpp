/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 15:13:55 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/16 18:08:12 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
	srand(time(NULL));

	std::cout << "-------------Subject test-----------" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "--------------My test-------------" << std::endl;

	try
	{
		Span sp1 = Span(5);
		sp1.addNumber(500000000);
		sp1.addNumber(500000001);
		sp1.addNumber(500000002);
		sp1.addNumber(500000003);
		sp1.addNumber(500000004);
		sp1.addNumber(500000005);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------" << std::endl;
	try
	{
		Span sp2 = Span(5);
		sp2.addNumber(5);
		sp2.addNumber(3);
		sp2.addNumber(17);
		sp2.addNumber(11);
		sp2.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------" << std::endl;
	try
	{
		Span sp2 = Span(5);
		sp2.addNumber(5);
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------" << std::endl;
	try
	{
		Span sp3 = Span(5);
		sp3.addNumber(5);
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------" << std::endl;
	try
	{
		Span sp4 = Span(10000);
		for (int i = 0; i < 10; i++)
            sp4.addNumber(rand() % 10000);
		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}