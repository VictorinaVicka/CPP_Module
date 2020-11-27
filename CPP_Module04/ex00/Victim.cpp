/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:45:51 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/26 21:37:51 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{}

Victim::~Victim()
{
	std::cout << "Victim " << newName << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &copy)
{
	*this = copy;
}

Victim &Victim::operator = (const Victim &target)
{
	newName = target.newName;
	return(*this);
}

void Victim::copyOperator(Victim const &target)
{
	newName = target.newName;
}

std::string Victim::getName(void) const
{
	return (newName);
}

Victim::Victim(std::string name)
{
	newName = name;
	std::cout << "Some random victim called " << newName << " just appeared!" << std::endl;
}

std::string Victim::introduce(void) const
{
	std::string say;

	say = "I'm " + newName + ", and I like otters!" + '\n';
	return (say);
}

void Victim::getPolymorphed(void) const
{
	std::cout << newName << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &vic)
{
	out << vic.introduce();
	return (out);
}