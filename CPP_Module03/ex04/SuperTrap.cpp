/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:55:05 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/26 13:20:04 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "Default constructor SuperTrap called" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Destructor SuperTrap called" << std::endl;
}

SuperTrap::SuperTrap(std::string newName)
{
	std::cout << "Default constructor SuperTrap called" << std::endl;
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 120;
	maxEnergyPoints = 120;
	level = 1;
	name = newName;
	meleeAttackDamage = 60;
	rangedAttackDamage = 20;
	armorDamageReduction = 0;
}

SuperTrap::SuperTrap(const SuperTrap &target)
{
	*this = target;
}

SuperTrap &SuperTrap::operator = (const SuperTrap &target)
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

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}