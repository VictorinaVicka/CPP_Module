/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:03:36 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/25 18:14:53 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor ClapTrap called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string newName)
{
	std::cout << "Default constructor ClapTrap called" << std::endl;
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	name = newName;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;
}

ClapTrap::ClapTrap(const ClapTrap &target)
{
	*this = target;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &target)
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

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << name << "> attacks <" << target
	<< "> at range, causing " << rangedAttackDamage << " points of damage!"
	<< std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << name << "> attacks <" << target
	<< "> at range, causing " << meleeAttackDamage << " points of damage!"
	<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int resu;

	amount -= armorDamageReduction;
	amount = (amount < 0 ? 0 : amount);
	resu = ((int)(hitPoints - amount) < 0 ? hitPoints : amount);
	hitPoints -= resu;
	std::cout << "FR4G-TP <" << name << "> takes " << resu << " points of damage! And now it you "
		<< hitPoints << " points! " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int resu = 0;

	resu = (hitPoints + resu > maxHitPoints ? maxHitPoints - hitPoints : amount);
	hitPoints = (hitPoints + amount > maxHitPoints ? maxHitPoints : hitPoints + amount);
	std::cout << "FR4G-TP <" << name << "> was repired, on " << resu << " points! Energy points: " << hitPoints << std::endl;
}

void ClapTrap::challengeNewcomerClapTrap(void)
{
	std::string attacks[5] = {"Handsome Jack is actually a robot controlled by a tiny alien sitting inside.",
							"When you rip off Jack's mask, you will see that it is actually a Scooter in disguise.",
							"What's under Jack's mask? The Rakkov Hive.",
							"We bet Jack is actually General Knox? He wears a mask so as not to get burnt.",
							"Jack wears a mask to hide that he is a robot."};
	std::cout << "FR4G-TP <" << name << ">: " << attacks[rand() % 5] << std::endl;
}
