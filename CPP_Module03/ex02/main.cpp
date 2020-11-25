/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:03:48 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/25 17:57:11 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	srand(time(0));
	FragTrap name("Tfarenga");
	ScavTrap name_1("Scav");

	std::cout << "<Tfarenga>" << std::endl;
	name.takeDamage(20);
	name.beRepaired(10);
	name.beRepaired(20);
	name.meleeAttack("Bobby");
	name.rangedAttack("Michael");
	name.takeDamage(115);
	name.beRepaired(40);
	name.vaulthunter_dot_exe("Dobby_1");
	name.vaulthunter_dot_exe("Dobby_2");

	std::cout << "<Scav>" << std::endl;
	name_1.takeDamage(20);
	name_1.beRepaired(10);
	name_1.beRepaired(20);
	name_1.meleeAttack("Bobby");
	name_1.rangedAttack("Michael");
	name_1.takeDamage(115);
	name_1.beRepaired(40);
	name_1.challengeNewcomer();
	name_1.challengeNewcomer();
	return (0);
}
