/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:27:20 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/27 13:27:59 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWEFIRST_HPP
# define POWEFIRST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(const PowerFist &copy);
		PowerFist &operator=(const PowerFist &target);
		~PowerFist();

		void attack(void) const;
};

#endif