/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:07:51 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/09 20:20:42 by tfarenga         ###   ########.fr       */
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
		return new A;
	else if (random == 1)
		return new B;
	else
		return new C;
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
	if (dynamic_cast<A*>(&p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p) != NULL)
		std::cout << "C" << std::endl;
}

int main(void)
{
	srand(time(NULL));

	Base *base = generate();
	Base *rnd = generate();

	identify_from_pointer(base);
	identify_from_reference(*base);
	std::cout << "<<<<<>>>>>" << std::endl;
	identify_from_pointer(rnd);
	identify_from_reference(*rnd);

	delete base;
	delete rnd;

	return (0);
}
