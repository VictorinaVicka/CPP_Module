/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 15:43:31 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/30 13:26:33 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		~SuperMutant();
		SuperMutant(const SuperMutant &copy);
		SuperMutant &operator=(const SuperMutant &target);

		void takeDamage(int damage);
};

#endif