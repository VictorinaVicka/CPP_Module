/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:07:51 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/10 18:47:52 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{}

A::~A()
{}

B::~B()
{}

C::~C()
{}

Base *generate(void)
{
	int random = rand() % 3;

	if (random == 0)
		{
			std::cout << "Clss A!" << std::endl;
			return new A;
		}
	else if (random == 1)
		{
			std::cout << "Clss B!" << std::endl;
			return new B;
		}
	else
		{
			std::cout << "Clss C!" << std::endl;
			return new C;
		}
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	try
	{
		A &refA = dynamic_cast<A&>(p);
		(void)refA;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{}

	try
	{
		B &refB = dynamic_cast<B&>(p);
		(void)refB;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{}

	try
	{
		C &refC = dynamic_cast<C&>(p);
		(void)refC;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{}
}

int main(void)
{
	srand(time(NULL));

	Base *base = generate();

	identify_from_pointer(base);
	identify_from_reference(*base);
	std::cout << "<<<<<>>>>>" << std::endl;

	Base *rnd = generate();

	identify_from_pointer(rnd);
	identify_from_reference(*rnd);

	delete base;
	delete rnd;

	return (0);
}
