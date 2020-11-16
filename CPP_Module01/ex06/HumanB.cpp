/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:45:29 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/16 12:46:28 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string type_t)
{
	type = type_t;
}

HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon &name_n)
{
	name = &name_n;
}

void HumanB::attack()
{
	std::cout << type << " attacks with his " << name->getType() << std::endl;
}
