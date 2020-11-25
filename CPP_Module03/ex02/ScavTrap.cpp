/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:03:52 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/25 18:15:24 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string newName)
{
	std::cout << "Default constructor ScavTrap called" << std::endl;
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 50;
	maxEnergyPoints = 50;
	level = 1;
	name = newName;
	meleeAttackDamage = 20;
	rangedAttackDamage = 15;
	armorDamageReduction = 3;
}

ScavTrap::ScavTrap(const ScavTrap &target)
{
	*this = target;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &target)
{
	hitPoints = target.hitPoints;
	maxHitPoints = target.maxHitPoints;
	energyPoints = target.energyPoints;
	level = target.level;
	name = target.name;
	meleeAttackDamage = target.meleeAttackDamage;
	rangedAttackDamage = target.rangedAttackDamage;
	armorDamageReduction = target.armorDamageReduction;
	return(*this);
}

void ScavTrap::challengeNewcomer(void)
{
	std::string attacks[5] = {"Handsome Jack is actually a robot controlled by a tiny alien sitting inside.",
							"When you rip off Jack's mask, you will see that it is actually a Scooter in disguise.",
							"What's under Jack's mask? The Rakkov Hive.",
							"We bet Jack is actually General Knox? He wears a mask so as not to get burnt.",
							"Jack wears a mask to hide that he is a robot."};
	std::cout << "FR4G-TP <" << name << ">: " << attacks[rand() % 5] << std::endl;
}
