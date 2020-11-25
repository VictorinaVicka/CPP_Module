/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:43:53 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/25 16:56:19 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string newName)
{
	std::cout << "Default constructor called" << std::endl;
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

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << name << "> attacks <" << target
	<< "> at range, causing " << rangedAttackDamage << " points of damage!"
	<< std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << name << "> attacks <" << target
	<< "> at range, causing " << meleeAttackDamage << " points of damage!"
	<< std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	int resu;

	amount -= armorDamageReduction;
	amount = (amount < 0 ? 0 : amount);
	resu = ((int)(hitPoints - amount) < 0 ? hitPoints : amount);
	hitPoints -= resu;
	std::cout << "FR4G-TP <" << name << "> takes " << resu << " points of damage! And now it you "
		<< hitPoints << " points! " << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int resu = 0;

	resu = (hitPoints + resu > maxHitPoints ? maxHitPoints - hitPoints : amount);
	hitPoints = (hitPoints + amount > maxHitPoints ? maxHitPoints : hitPoints + amount);
	std::cout << "FR4G-TP <" << name << "> was repired, on " << resu << " points! Energy points: " << hitPoints << std::endl;

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
