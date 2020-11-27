/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:45:44 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/27 11:35:40 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{}

Sorcerer::~Sorcerer()
{
	std::cout << newName << ", " << newTitle << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	newName = name;
	newTitle = title;
	std::cout << newName << ", " << newTitle << ", is born!" << std::endl;
}

std::string Sorcerer::introduce(void) const
{
	std::string say;

	say = "I am " + newName + ", " + newTitle + ", and I like ponies!" + '\n';
	return (say);
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	*this = copy;
}

Sorcerer &Sorcerer::operator = (const Sorcerer &target)
{
	newName = target.newName;
	newTitle = target.newTitle;
	return(*this);
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sor)
{
	out << sor.introduce();
	return (out);
}

void Sorcerer::polymorph(Victim const &polymorph) const
{
	polymorph.getPolymorphed();
}
