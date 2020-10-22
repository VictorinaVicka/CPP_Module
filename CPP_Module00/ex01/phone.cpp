/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:22:19 by tfarenga          #+#    #+#             */
/*   Updated: 2020/10/22 16:12:14 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

Phone::Phone()
{
	this->contact = 0;
}

void Phone::start(void)
{
	std::cout << "Run the commands: EXIT, ADD, or SEARCH" << '\n';
}

void Phone::table(void)
{
	std::cout << "|     index|firsst name| last name|  nickname|" << '\n';
	for (int i = 0; i < this->contact; i++)
	{
		this->contacts[i].taple();
		std::cout << "|          |          |          |          |" << '\n';
	}
}

void Phone::add(void)
{
	// if (this->contacts[this->contact].print(this->contact + 1))
	// 	this->contact++;
	// else if (this->contact == 8)
	// 	std::cout << "This program cannot store more than 8 contacts" << '\n';
}

void Phone::search(void)
{

}