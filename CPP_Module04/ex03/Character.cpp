/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:15:21 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/01 12:23:42 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{}

Character::Character(std::string const &name)
{
	_name = name;
	equipe = 0;
	for (int i = 0; i < 4; i++)
		materials[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < equipe; i++)
		delete materials[i];
}

Character::Character(const Character& copy)
{
	for (int i = 0; i < copy.equipe; i++)
		equip(copy.materials[i]->clone());
	for (int i = equipe; i < 4; i++)
		materials[i] = NULL;
}

Character	&Character::operator=(const  Character &target)
{
	_name = target._name;
	for (int i = 0; i < equipe; i++)
		delete materials[i];
	equipe = 0;
	for (int i = 0; i < target.equipe; i++)
		equip(target.materials[i]->clone());
	for (int i = equipe; i < 4; i++)
		materials[i] = NULL;
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (!m || equipe > 3)
		return ;
	for (int i = 0; i < equipe; i++)
		if (materials[i] == m)
			return ;
	materials[equipe++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > equipe || !materials[idx])
		return ;
	for (int i = idx; i < 3; i++)
	{
		materials[i] = materials[i + 1];
		materials[i + 1] = NULL;
	}
	equipe--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= equipe || !materials[idx])
		return ;
	materials[idx]->use(target);
}
