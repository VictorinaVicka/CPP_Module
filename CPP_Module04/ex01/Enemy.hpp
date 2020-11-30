/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:34:30 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/27 13:51:47 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	protected:
		int 		newHP;
		std::string newType;

	public:
		Enemy();
		Enemy(const Enemy &copy);
		Enemy &operator=(const Enemy &target);

		Enemy(int hp, std::string const & type);
		virtual ~Enemy();
		std::string const &getType(void) const;
		int getHP(void) const;
		virtual void takeDamage(int damage);
};

#endif