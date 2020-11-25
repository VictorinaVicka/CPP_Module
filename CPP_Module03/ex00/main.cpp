/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 13:31:04 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/25 15:36:39 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main (void)
{
	srand(time(0));
	FragTrap name("Tfarenga");

	name.takeDamage(20);
	name.beRepaired(10);
	name.beRepaired(20);
	name.meleeAttack("Bobby");
	name.rangedAttack("Michael");
	name.takeDamage(115);
	name.beRepaired(40);
	name.vaulthunter_dot_exe("Dobby_1");
	name.vaulthunter_dot_exe("Dobby_2");
	return (0);
}