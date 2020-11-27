/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:45:54 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/27 11:49:32 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	protected:
		std::string newName;

	public:
		Victim();
		~Victim();
		Victim(const Victim &copy);
		Victim &operator=(const Victim &target);


		Victim(std::string name);
		virtual void getPolymorphed(void) const;
		std::string introduce(void) const;
		std::string getName(void) const;
		void 		copyOperator(Victim const &target);
};

std::ostream &operator<<(std::ostream &out, Victim const &vic);

#endif