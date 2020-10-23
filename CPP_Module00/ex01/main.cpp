/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:23:04 by tfarenga          #+#    #+#             */
/*   Updated: 2020/10/23 12:30:16 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

int main(void)
{
	Phone		phone;
	std::string	str;

	phone.start();
	while (true)
	{
		std::getline(std::cin, str);
		if (str == "EXIT")
			break ;
		else if (str == "ADD")
			phone.add();
		else if (str == "SEARCH")
			phone.search();
	}
	return (0);
}