/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:20:08 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/27 13:26:49 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
	newName = "Plasma Rifle";
	newApcost = 5;
	newDamage = 21;
}

PlasmaRifle::~PlasmaRifle()
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy)
{
	newName = copy.newName;
	newApcost = copy.newApcost;
	newDamage = copy.newDamage;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &target)
{
	newName = target.newName;
	newApcost = target.newApcost;
	newDamage = target.newDamage;
	return(*this);
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}