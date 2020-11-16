/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 12:53:58 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/16 16:44:59 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "First write test and then s1 s2" << std::endl;
		return (1);
	}

	std::string 	file;
	std::string 	s1 = argv[2];
	std::string 	s2 = argv[3];
	std::ofstream	ofst;
	std::ifstream	ifst;
	std::string		buf;
	ifst.open(argv[1]);
	if (!ifst.is_open())
	{
		std::cout << "Can't open file for reading!" << std::endl;
		return (1);
	}
	file = std::string(argv[1] + std::string(".replace"));
	ofst.open(file);
	if (!ofst.is_open())
	{
		std::cout << "Can't open file for writing" << std::endl;
		return (1);
	}
	while (getline(ifst, buf))
	{
		if (buf.find(s1) != std::string::npos)
			buf.replace(buf.find(s1), s1.length(), s2);
		ofst << buf << std::endl;
	}
	ifst.close();
	ofst.close();
	return (0);
}