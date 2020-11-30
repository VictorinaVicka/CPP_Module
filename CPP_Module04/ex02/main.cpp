/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:44:19 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/30 21:08:48 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main(void)
{
	std::cout << "<<---------Subject Test----------->>" << std::endl;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "<<---------Additional Test----------->>" << std::endl;
	ISpaceMarine* bob2 = new TacticalMarine;
	ISpaceMarine* jim2 = new AssaultTerminator;
	Squad *s = new Squad;
	s->push(bob2);
	s->push(jim2);
	Squad *sq = new Squad(*s);
	std::cout << "--<<It's - S attacks>>--" << std::endl;
	for (int i = 0; i < s->getCount(); ++i)
	{
		s->getUnit(i)->battleCry();
		s->getUnit(i)->rangedAttack();
		s->getUnit(i)->meleeAttack();
	}
	std::cout << "--<<It's - SQ attacks>>--" << std::endl;
	for (int i = 0; i < sq->getCount(); ++i)
	{
		sq->getUnit(i)->battleCry();
		sq->getUnit(i)->rangedAttack();
		sq->getUnit(i)->meleeAttack();
	}
	delete s;
	delete sq;

	return (0);
}
