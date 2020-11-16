/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:45:43 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/16 12:41:12 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::~Weapon()
{}

Weapon::Weapon(std::string weapon)
{
	type = weapon;
}

std::string const &Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string weapon)
{
	type = weapon;
}
