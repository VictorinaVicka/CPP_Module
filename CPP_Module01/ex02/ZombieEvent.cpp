/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 11:09:02 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/12 14:36:11 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	std::cout << "|..Constructor called..|" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "|..Destructor called..|" << std::endl;
}

void ZombieEvent::setZombieType(std::string type)
{
	this->choice_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, choice_type));
}

Zombie*  ZombieEvent::randomChump(void)
{
	std::string random_name[8] = {"Jac", "Pole", "Bob", "Bond", "Antyan", "Ben", "Arno", "Gogo"};

	Zombie *zombie = new Zombie(random_name[rand() % 8], choice_type);
	zombie->announce();
	return (zombie);
}