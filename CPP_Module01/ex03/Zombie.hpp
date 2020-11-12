/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 15:57:39 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/12 16:22:42 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string type_t;
		std::string name_n;

	public:
		Zombie();
		Zombie(std::string name, std::string type);
		~Zombie();
		void announce(void) const;
		void setName(std::string name);
		void setType(std::string type);
};

#endif