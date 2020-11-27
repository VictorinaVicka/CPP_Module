/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:45:41 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/26 21:33:40 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon();
		~Peon();
		Peon(const Peon &copy);
		Peon &operator=(const Peon &sorc);

		Peon(std::string name);
		void getPolymorphed(void) const;
		// std::string introduce(void) const;
};

#endif