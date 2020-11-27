/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:45:48 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/26 22:28:58 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <string>
#include "Victim.hpp"

class Sorcerer
{
	private:
		std::string newName;
		std::string newTitle;

	public:
		Sorcerer();
		~Sorcerer();
		Sorcerer(const Sorcerer &copy);
		Sorcerer &operator=(const Sorcerer &target);

		Sorcerer(std::string name, std::string title);
		std::string introduce(void) const;
		void polymorph(Victim const &polymorph) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sor);

#endif