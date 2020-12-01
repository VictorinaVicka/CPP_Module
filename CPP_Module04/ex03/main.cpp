/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:13:51 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/01 13:51:02 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
// #include "AMateria.hpp"
// #include "ICharacter.hpp"
// #include "IMateriaSource.hpp"

int main(void)
{
	std::cout << "<<---------Subject Test----------->>" << std::endl;
    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete me;
	delete src;

	std::cout << "<<---------Additional Test----------->>" << std::endl;
	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());

	ICharacter* you = new Character("you");

	AMateria* cure = src2->createMateria("cure");
    AMateria* ice = src2->createMateria("ice");
	you->equip(cure);
	you->equip(ice);

	ICharacter* dobby = new Character("dobby");

	you->use(1, *dobby);
	you->use(0, *dobby);
	std::cout << "Ice: " << ice->getXP() << " xp" << std::endl;
    std::cout << "Cure: " << cure->getXP() << " xp" << std::endl;
    you->use(0, *dobby);
	you->use(1, *dobby);
    std::cout << "Ice: " << ice->getXP() << " xp" << std::endl;
    std::cout << "Cure: " << cure->getXP() << " xp" << std::endl;

	delete dobby;
	delete you;
	delete src2;

	return (0);
}
