/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:24:22 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/11 14:13:54 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
	private:
		std::string name;
		int age;
		std::string color;

	public:
		Pony(std::string name, int age, std::string color);
		~Pony();
		void names(void) const;
		void years(void) const;
		void colors(void) const;
		void setAge(int age);
		int getAge(void) const;
		void setName(std::string name);
		std::string getName(void) const;
		void setColor(std::string color);
		std::string getColor(void) const;
};

#endif