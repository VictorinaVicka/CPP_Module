/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 15:43:35 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/27 17:02:57 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	newHP = 170;
	newType = "Super Mutant";
}

SuperMutant::~SuperMutant()
{
	std::cout <<  "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy)
{
	newHP = copy.newHP;
	newType = copy.newType;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &target)
{
	newHP = target.newHP;
	newType = target.newType;
	return(*this);
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}