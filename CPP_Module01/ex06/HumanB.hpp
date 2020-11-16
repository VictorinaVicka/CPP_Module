/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:45:35 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/16 12:45:39 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon 		*name;
		std::string type;

	public:
		HumanB(std::string type_t);
		~HumanB();
		void attack();
		void setWeapon(Weapon &name_n);
};

#endif