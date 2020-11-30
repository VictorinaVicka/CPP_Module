/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:43:39 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/27 13:54:00 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{}

Enemy::~Enemy()
{}

Enemy::Enemy(int hp, std::string const & type)
{
	newHP = hp;
	newType = type;
}

Enemy::Enemy(const Enemy &copy)
{
	newHP = copy.newHP;
	newType = copy.newType;
}

Enemy &Enemy::operator=(const Enemy &target)
{
	newHP = target.newHP;
	newType = target.newType;
	return(*this);
}

std::string const &Enemy::getType(void) const
{
	return (newType);
}

int Enemy::getHP(void) const
{
	return (newHP);
}

void Enemy::takeDamage(int damage)
{
	if (damage > 0)
		newHP -= damage;
	else
		return ;
	if (newHP < 0)
		newHP = 0;
}