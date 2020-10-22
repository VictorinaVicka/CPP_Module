/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:02:59 by tfarenga          #+#    #+#             */
/*   Updated: 2020/10/22 16:31:17 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string const Phonebook::fields[] = {
		"first name",
		"last name",
		"nickname",
		"login",
		"postal address",
		"email address",
		"phone number",
		"birthday date",
		"favorite meal",
		"underwear color",
		"darkest secret"
	};

Phonebook::Phonebook()
{
	for (int i = 0; i <= 0; i++)
		this->info[i] = std::string();
	this->i = 0;
}

void Phonebook::taple()
{
	std::cout << "|" << std::setw(10) << this->i;
	for (int i = 0; i <= 2; i++)
	{
		std::cout << "|";
		if (this->info[i].length() > 10)
		{
			for (int j = 0; j <= 8; j++)
				std::cout << this->info[i][j];
			std::cout << '.';
		}
		else
			std::cout << std::setw(10) << this->info[i];
	}
	std::cout << "|" << '\n';
}

void Phonebook::print()
{
	std::cout << "Contact №: " << '\n';
	for (int i = 0; i <= 10; i++)
		std::cout << Phonebook::fields[i] << ": " << this->info[i] << '\n';
}

bool Phonebook::data(int i)
{
	this->i = i;
	return (true);
}
