/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:03:40 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/26 13:22:24 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	protected:
		unsigned int hitPoints;
		unsigned int maxHitPoints;
		unsigned int energyPoints;
		unsigned int maxEnergyPoints;
		unsigned int level;
		std::string  name;
		unsigned int meleeAttackDamage;
		unsigned int rangedAttackDamage;
		unsigned int armorDamageReduction;

	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string newName);
		ClapTrap(const ClapTrap &target);
		ClapTrap &operator = (const ClapTrap &target);

		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomerClapTrap(void);

        std::string getName(void);
};

#endif
