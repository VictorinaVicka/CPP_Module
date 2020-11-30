/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:44:21 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/30 17:23:36 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	numUnit = 0;
	unt = NULL;
}

Squad::~Squad()
{
	if (unt)
	{
		for (int i = 0; i < numUnit; i++)
			delete unt[i];
		delete[] unt;
	}
}

Squad::Squad(const Squad &copy)
{

	numUnit = 0;
	unt = NULL;
	for(int i = 0; i < copy.getCount(); i++)
		push(copy.getUnit(i)->clone());
}

Squad &Squad::operator=(const Squad &target)
{
	if (unt)
	{
		for (int i = 0; i < numUnit; i++)
			delete unt[i];
		delete unt;
		unt = NULL;
	}
	numUnit = 0;
	for (int i = 0; i < target.getCount(); i++)
		this->push(target.getUnit(i)->clone());
	return(*this);
}

int	Squad::getCount(void) const
{
	return (numUnit);
}

ISpaceMarine* Squad::getUnit(int unit) const
{
	if (unit > (numUnit - 1) || unit < 0)
		return (NULL);
	return (unt[unit]);
}

int Squad::push(ISpaceMarine* numberUnit)
{
	ISpaceMarine** newUnt;
	int i;

	newUnt = new ISpaceMarine*[numUnit + 1];
	for (i = 0; i < numUnit; i++)
		newUnt[i] = unt[i];
	newUnt[i] = numberUnit;
	if (unt != NULL)
		delete[] unt;
	unt = newUnt;
	return (numUnit++);
}
