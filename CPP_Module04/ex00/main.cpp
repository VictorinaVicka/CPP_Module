/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:45:35 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/27 12:16:08 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"

int main (void)
{
	std::cout << "------------------<<Subject>>" << std::endl;
	{
	Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	}

	std::cout << "-------------------<<My main>>" << std::endl;
	{
	Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
	Peon joe("Joe");

	Sorcerer vinks(robert);
	Victim man(jim);
	Peon jodie(joe);

	std::cout << vinks << man << jodie;

	vinks = robert;
	jodie = joe;
	vinks.polymorph(jodie);
	jodie.getPolymorphed();
	}

	return (0);
}