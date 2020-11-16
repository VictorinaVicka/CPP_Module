/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:45:20 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/16 12:44:27 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string type_t, Weapon &name_n)
{
	type = type_t;
	name = &name_n;
}

HumanA::~HumanA()
{}

void HumanA::setWeapon(Weapon &name_n)
{
	name = &name_n;
}

void HumanA::attack()
{
	std::cout << type << " attacks with his " << name->getType() << std::endl;
}
