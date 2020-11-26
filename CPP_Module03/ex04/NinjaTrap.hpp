/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:30:37 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/26 13:20:02 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap();
		~NinjaTrap();
		NinjaTrap(std::string newName);
		NinjaTrap(const NinjaTrap &target);
		NinjaTrap &operator = (const NinjaTrap &target);

		void ninjaShoebox(ClapTrap &target);
		void ninjaShoebox(FragTrap &target);
		void ninjaShoebox(ScavTrap &target);
		void ninjaShoebox(NinjaTrap &target);
};

#endif