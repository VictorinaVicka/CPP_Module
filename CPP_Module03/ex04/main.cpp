/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:03:48 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/26 13:20:48 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main (void)
{
	srand(time(0));
	FragTrap name_1 ("Frag");
	std::cout << "<Frag>" << std::endl;

	SuperTrap name_2("Super");
	std::cout << "<Super>" << std::endl;
	name_2.ninjaShoebox(name_1);
	name_2.meleeAttack("Bobby");
	name_2.rangedAttack("Michael");
	name_2.takeDamage(115);
	name_2.beRepaired(40);
	name_2.vaulthunter_dot_exe("Dobby_1");
	name_2.vaulthunter_dot_exe("Dobby_2");

	return (0);
}
