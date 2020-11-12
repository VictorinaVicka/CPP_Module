/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 15:57:43 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/12 16:31:11 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	std::cout << "|..Constructor called..|" << std::endl;

	srand(time(NULL));
	std::string random_name[8] = {"Jac", "Pole", "Bob", "Bond", "Antyan", "Ben", "Arno", "Gogo"};
	this->n = n;
	new_zombie = new Zombie[this->n];
	for (int i = 0; i < n; i++)
	{
		new_zombie[i].setName(random_name[rand() % 8]);
		new_zombie[i].setType("strange boy");
		new_zombie[i].announce();
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "|..Destructor called..|" << std::endl;
	delete []new_zombie;
}
