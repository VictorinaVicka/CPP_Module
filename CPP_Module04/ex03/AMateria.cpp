/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:15:15 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/01 12:11:02 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(std::string const & type)
{
	_xp = 0;
	_type = type;
}

AMateria::~AMateria()
{}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
}

AMateria &AMateria::operator=(const  AMateria &target)
{
	_xp = target._xp;
	_type = target._type;
	return (*this);
}

std::string const & AMateria::getType(void) const
{
	return (_type);
}

unsigned int AMateria::getXP(void) const
{
	return (_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}