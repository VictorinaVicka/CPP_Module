/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:03:46 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/26 10:45:37 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string newName);
		FragTrap(const FragTrap &target);
		FragTrap &operator = (const FragTrap &target);

		void vaulthunter_dot_exe(std::string const &target);
};

#endif