/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 12:49:18 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/27 18:31:35 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	protected:
		AWeapon();
		std::string newName;
		int			newApcost;
		int			newDamage;

	public:
		AWeapon(const AWeapon &copy);
		AWeapon &operator=(const AWeapon &target);

		AWeapon(std::string const & name, int apcost, int damage);
		virtual 	~AWeapon();
		std::string const &getName(void) const;
		int 		getAPCost(void) const;
		int 		getDamage(void) const;

		virtual void attack() const = 0;
};

#endif