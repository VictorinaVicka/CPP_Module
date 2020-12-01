/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:15:18 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/01 13:02:31 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria;
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class	AMateria
{
	protected:
		unsigned int _xp;
		std::string _type;
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(const AMateria& copy);
		AMateria& operator=(const AMateria &target);

		AMateria(std::string const & type);
		std::string const & getType(void) const; //Returns the materia type
		unsigned int getXP(void) const; //Returns the Materia's XP

		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif