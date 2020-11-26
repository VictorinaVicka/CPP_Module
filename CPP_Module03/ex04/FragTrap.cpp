/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:03:43 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/25 18:15:11 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor FragTrap called" << std::endl;
}

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
