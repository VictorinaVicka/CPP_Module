/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 15:57:35 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/12 16:26:21 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name, std::string type)
{
	type_t = type;
	name_n = name;
}

Zombie::~Zombie()
{}

void Zombie::setName(std::string name)
{
	name_n = name;
}

void Zombie::setType(std::string type)
{
	type_t = type;
}

void Zombie::announce(void) const
{
	std::cout << "<" << name_n <<  " (" << type_t << ")" << "> " << "Braiiiiiiinnnssss..." << std::endl;
}
