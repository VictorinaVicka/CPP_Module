/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:43:44 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/25 17:06:26 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string newName)
{
	std::cout << "Default constructor FragTrap called" << std::endl;
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

FragTrap::FragTrap(const FragTrap &target)
{
	*this = target;
}

FragTrap &FragTrap::operator = (const FragTrap &target)
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

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << name << "> attacks <" << target
	<< "> at range, causing " << rangedAttackDamage << " points of damage!"
	<< std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << name << "> attacks <" << target
	<< "> at range, causing " << meleeAttackDamage << " points of damage!"
	<< std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	int resu;

	amount -= armorDamageReduction;
	amount = (amount < 0 ? 0 : amount);
	resu = ((int)(hitPoints - amount) < 0 ? hitPoints : amount);
	hitPoints -= resu;
	std::cout << "FR4G-TP <" << name << "> takes " << resu << " points of damage! And now it you "
		<< hitPoints << " points! " << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	unsigned int resu = 0;

	resu = (hitPoints + resu > maxHitPoints ? maxHitPoints - hitPoints : amount);
	hitPoints = (hitPoints + amount > maxHitPoints ? maxHitPoints : hitPoints + amount);
	std::cout << "FR4G-TP <" << name << "> was repired, on " << resu << " points! Energy points: " << hitPoints << std::endl;

}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string attacks[5] = {"Lightening! Kukachow!",
							"I am fire, I am Death",
							"Dance battle!",
							"Zippity doodah!",
							"Take it!"};
	if(energyPoints >= 25)
	{
		std::cout << "FR4G-TP <" << name << ">: " << target << "! " << attacks[rand() % 5] << std::endl;
		energyPoints -= 25;
	}
	else
		std::cout << "FR4G-TP <" << name << ">: out of energy!" << std::endl;
}
