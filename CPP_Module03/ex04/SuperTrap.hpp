/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:55:02 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/25 21:18:49 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include "ClapTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap();
		~SuperTrap();
		SuperTrap(std::string newName);
		SuperTrap(const SuperTrap &target);
		SuperTrap &operator=(const SuperTrap &target);

		void meleeAttack(std::string const &target);
    	void rangedAttack(std::string const &target);
};

#endif