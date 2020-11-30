/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:44:25 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/30 16:52:12 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "TacticalMarine.hpp"
# include "AssaultTerminator.hpp"

class Squad : public ISquad
{
	private:
		int			numUnit;
		ISpaceMarine **unt;
	public:
		Squad();
		~Squad();
		Squad(const Squad &copy);
		Squad &operator=(const Squad &target);

		virtual int getCount(void) const;
		virtual ISpaceMarine* getUnit(int unit) const;
		virtual int push(ISpaceMarine* numberUnit);
};

#endif