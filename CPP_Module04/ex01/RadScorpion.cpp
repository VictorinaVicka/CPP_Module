/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:03:20 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/27 17:07:21 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
	std::cout << "* click click click *" << std::endl;
	newHP = 80;
	newType = "RadScorpion";
}

RadScorpion::~RadScorpion()
{
	std::cout <<  "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy)
{
	newHP = copy.newHP;
	newType = copy.newType;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &target)
{
	newHP = target.newHP;
	newType = target.newType;
	return(*this);
}

void RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}
