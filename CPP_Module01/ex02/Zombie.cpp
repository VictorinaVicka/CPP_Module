/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 11:08:53 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/12 13:56:22 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	type_t = type;
	name_n = name;
}

Zombie::~Zombie()
{}

void Zombie::announce(void) const
{
	std::cout << "<" << name_n <<  " (" << type_t << ")" << "> " << "Braiiiiiiinnnssss..." << std::endl;
}

