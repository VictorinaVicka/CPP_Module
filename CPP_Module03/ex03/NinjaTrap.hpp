/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:30:37 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/25 18:31:48 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap();
		~NinjaTrap();
		NinjaTrap(std::string newName);
		NinjaTrap(const NinjaTrap &target);
		NinjaTrap &operator = (const NinjaTrap &target);

		void ninjaShoebox(void);
};

#endif