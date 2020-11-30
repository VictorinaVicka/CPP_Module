/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:03:26 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/27 17:07:09 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &copy);
		RadScorpion &operator=(const RadScorpion &target);
		~RadScorpion();

		void takeDamage(int damage);
};

#endif