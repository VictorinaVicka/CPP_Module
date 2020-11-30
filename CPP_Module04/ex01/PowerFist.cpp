/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:28:10 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/27 13:32:00 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist()
{
	newName = "Power Fist";
	newApcost = 8;
	newDamage = 50;
}

PowerFist::PowerFist(const PowerFist &copy)
{
	newName = copy.newName;
	newApcost = copy.newApcost;
	newDamage = copy.newDamage;
}

PowerFist &PowerFist::operator=(const PowerFist &target)
{
	newName = target.newName;
	newApcost = target.newApcost;
	newDamage = target.newDamage;
	return(*this);
}

PowerFist::~PowerFist()
{}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
