/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:03:47 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/08 19:31:51 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
	}
	else
	{
		Cast cast(argv[1]);
		std::string str(argv[1]);

		if (str.length() == 1 && isprint(str[0]) && !isdigit(str[0]))
		{
			std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(str[0]) << "f" << std::endl;
			std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(str[0]) << std::endl;
			std::cout << "char: " << "'" << str[0] << "'" << std::endl;
		}
		else
		{
		cast.getInt();
		cast.getFloat();
		cast.getDouble();
		cast.getChar();
		}
	}
}