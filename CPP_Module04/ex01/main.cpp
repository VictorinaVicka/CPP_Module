/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 12:49:24 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/30 13:38:36 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"


int main(void)
{
		std::cout << "<<---------Subject Test----------->>" << std::endl;
       	Character* me = new Character("me");
       	std::cout << *me;
		Enemy* b = new RadScorpion();
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
		me->equip(pr);
		std::cout << *me;
		me->equip(pf);

		me->attack(b);
		std::cout << *me;
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(b);
    	std::cout << *me;

		std::cout << "<<---------Additional Test----------->>" << std::endl;
		Character super = Character("super");
		std::cout << super;
		Enemy* s = new SuperMutant();

		super.equip(pr);
	    std::cout << super;
	    super.equip(pf);
	    std::cout << super;

	    super.attack(s);
		super.equip(pr);
		std::cout << super;
	    super.attack(s);
	    std::cout << super;
		super.attack(s);
	    std::cout << super;
		super.attack(s);
	    std::cout << super;
		super.attack(s);
	    std::cout << super;
		super.attack(s);
	    std::cout << super;
		super.attack(s);
	    std::cout << super;

		delete pr;
	    delete pf;
		return (0);
}