/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:07:59 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/27 18:49:24 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		Character();
		std::string newName;
		int 		AP;
		AWeapon		*weapon;

	public:
		Character(const Character &copy);
		Character &operator=(const Character &target);
		~Character();

		Character(std::string const & name);
		std::string const &getName(void) const;
		void 		recoverAP(void);
		void 		equip(AWeapon* aweapon);
		void 		attack(Enemy *enemy);
		int			getAP(void) const;
		AWeapon		*getAWeaponName(void) const;
};

std::ostream &operator<<(std::ostream &out, Character const &ch);

#endif