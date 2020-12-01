/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:15:47 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/01 12:47:40 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	volume = 0;
	for (int i = 0; i < 4; i++)
		materia_s[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < volume; i++)
		delete materia_s[i];
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	volume = 0;
	for (int i = 0; i < copy.volume; i++)
		learnMateria(copy.materia_s[i]->clone());
	for (int i = 0; i < 4; i++)
		materia_s[i] = NULL;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &target)
{
	for (int i = 0; i < 4; i++)
		delete materia_s[i];
	volume = 0;
	for (int i = 0; i < target.volume; i++)
		learnMateria(target.materia_s[i]->clone());
	for (int i = 0; i < 4; i++)
		materia_s[i] = NULL;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *mat)
{
	if (volume > 3 || !mat)
		return ;
	for (int i = 0; i < volume; i++)
		if (materia_s[i] == mat)
			return ;
	materia_s[volume++] = mat;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < volume; i++)
		if (materia_s[i]->getType() == type)
			return (materia_s[i]->clone());
	return (NULL);
}
