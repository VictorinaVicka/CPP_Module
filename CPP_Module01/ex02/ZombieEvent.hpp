/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 11:09:05 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/12 14:06:36 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <cstdlib>

class ZombieEvent
{
	private:
		std::string choice_type;
	public:
	ZombieEvent();
	~ZombieEvent();
	void setZombieType(std::string type);
    Zombie *newZombie(std::string name);
	Zombie *randomChump(void);
};

#endif