/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:45:39 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/26 21:39:02 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{}

Peon::~Peon()
{
	std::cout << "Bleuark..." <<std::endl;
}

Peon::Peon(const Peon &copy)
{
	*this = copy;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(const Peon &target)
{
	Victim::copyOperator(target);
	return(*this);
}

void Peon::getPolymorphed(void) const
{
	std::cout << getName() << "  has been turned into a pink pony!" << std::endl;
}
