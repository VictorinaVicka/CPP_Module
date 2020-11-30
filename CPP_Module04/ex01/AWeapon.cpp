/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 12:49:08 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/27 13:08:54 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{}

AWeapon::~AWeapon()
{}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	newName = name;
	newApcost = apcost;
	newDamage = damage;
}

AWeapon::AWeapon(const AWeapon &copy)
{
	newName = copy.newName;
	newApcost = copy.newApcost;
	newDamage = copy.newDamage;
}

AWeapon &AWeapon::operator=(AWeapon const &target)
{
	newName = target.newName;
	newApcost = target.newApcost;
	newDamage = target.newDamage;
	return(*this);
}

std::string const &AWeapon::getName(void) const
{
	return (newName);
}

int 		AWeapon::getAPCost(void) const
{
	return (newApcost);
}

int 		AWeapon::getDamage(void) const
{
	return (newDamage);
}
