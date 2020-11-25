/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:30:43 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/25 18:47:27 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << "Default constructor NinjaTrap called" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destructor NinjaTrap called" << std::endl;
}

NinjaTrap::NinjaTrap(std::string newName)
{
	std::cout << "Default constructor NinjaTrap called" << std::endl;
	hitPoints = 60;
	maxHitPoints = 60;
	energyPoints = 120;
	maxEnergyPoints = 120;
	level = 1;
	name = newName;
	meleeAttackDamage = 60;
	rangedAttackDamage = 5;
	armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(const NinjaTrap &target)
{
	*this = target;
}

NinjaTrap &NinjaTrap::operator = (const NinjaTrap &target)
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

void NinjaTrap::ninjaShoebox(void)
{
	std::string tolks[4] = {"Life flows like the wheel of fate, from day to night, from night to day.",
							"Christmas is a time to think about others, a time to forget about yourself.",
							"Home is where your hat hangs.",
							"There is no excuse for a leader.",
							};
	std::string turtles[4] = {"Michelangelo", "Donatello", "Raphael", "Leonardo"};
	std::cout << "NinjaTrap-TP <" << name <<  "> " << turtles[rand() % 4] << ": " << tolks[rand() % 4] << std::endl;
}
