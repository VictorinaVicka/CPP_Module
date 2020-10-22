/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:22:19 by tfarenga          #+#    #+#             */
/*   Updated: 2020/10/22 17:52:40 by tfarenga         ###   ########.fr       */
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
	std::cout << "|     index|first name| last name|  nickname|" << '\n';
	for (int i = 0; i < this->contact; i++)
	{
		this->contacts[i].table();
		std::cout << "|          |          |          |          |" << '\n';
	}
}

void Phone::add(void)
{
	if (this->contacts[this->contact].data(this->contact + 1))
		this->contact++;
	else if (this->contact == 8)
		std::cout << "This program cannot store more than 8 contacts" << '\n';
}

void Phone::search(void)
{
	int	i;

	if (this->contact == 0)
		std::cout << "Is empty" << '\n';
	else
	{
		this->table();
		std::cout << "Index: ";
		while (!(std::cin >> i) || (i < 0 || i > this->contact))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
			std::cout << "invalide index. Try once more: ";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (i > 0)
			this->contacts[i - 1].print();
	}
}