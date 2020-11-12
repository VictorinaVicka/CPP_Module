/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 11:08:46 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/12 14:35:48 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

#include <unistd.h>
int main(void)
{
	ZombieEvent type_one;
    ZombieEvent	type_two;
	ZombieEvent type_three;

	srand(time(NULL));
	type_one.setZombieType("good boy");
	Zombie *name_one = type_one.newZombie("Tom");
	name_one->announce();

	type_two.setZombieType("bad boy");
	Zombie *name_two = type_two.randomChump();

	type_three.setZombieType("strange boy");
	Zombie *name_three = type_three.randomChump();

	delete(name_one);
	delete(name_two);
	delete(name_three);
	return (0);
}
