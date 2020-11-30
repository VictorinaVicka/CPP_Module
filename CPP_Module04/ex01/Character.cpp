/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:07:56 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/30 13:08:48 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{}

Character::~Character()
{}

Character::Character(std::string const & name)
{
	newName = name;
	AP = 40;
	weapon = NULL;
}

Character::Character(const Character &copy)
{
	newName = copy.newName;
	AP = copy.AP;
	weapon = copy.weapon;
}

Character &Character::operator=(const Character &target)
{
	newName = target.newName;
	AP = target.AP;
	weapon = target.weapon;
	return(*this);
}

std::string const &Character::getName(void) const
{
	return (newName);
}

int Character::getAP(void) const
{
	return (AP);
}

void Character::recoverAP(void)
{
	if (AP + 10 <= 40)
		AP += 10;
	else
		AP = 40;
}

void Character::attack(Enemy *enemy)
{
	int weaponAPCost;
	int weaponDamage;

	weaponAPCost = weapon->getAPCost();
	if (!enemy || !weapon)
        return ;
    if (AP < weaponAPCost)
        return ;
    AP -= weaponAPCost;
    std::cout << newName << " attacks " << enemy->getType() << " with a " << weapon->getName() << std::endl;
    weapon->attack();
	weaponDamage = weapon->getDamage();
	enemy->takeDamage(weaponDamage);
    if ((enemy->getHP()) == 0)
        delete enemy;
}

void Character::equip(AWeapon* aweapon)
{
	weapon = aweapon;
}

AWeapon *Character::getAWeaponName(void) const
{
	return (weapon);
}

std::ostream &operator<<(std::ostream &out, Character const &ch)
{
	out << ch.getName() << " has ";
	out << ch.getAP();
	if (ch.getAWeaponName() == NULL)
		out << " AP and is unarmed" << std::endl;
	else
		out << " AP and wields a " << ch.getAWeaponName()->getName() << std::endl;
	return (out);
}