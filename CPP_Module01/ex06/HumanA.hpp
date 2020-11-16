/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:45:26 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/16 12:42:38 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon 		*name;
		std::string type;

	public:
		void attack();
		HumanA(std::string type_t, Weapon &name_n);
		~HumanA();
		void setWeapon(Weapon &name_n);
};

#endif