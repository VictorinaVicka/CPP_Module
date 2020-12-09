/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:14:47 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/09 17:25:31 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

struct Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

void *serialize(void)
{
	srand(time(NULL));
	std::string randomAlpha = "0123456789abcdefghijklmopqrstuvxyzABCDEFGHIJKLMOPQRSTUVXYZ";

	char *str = new char[20];

	for (int i = 0; i < 8; i++)
	{
		str[i] = randomAlpha[rand() % (sizeof(randomAlpha) - 1)];
		std::cout << str[i];
	}
	*reinterpret_cast<int*>(str + 8) = rand();
	std::cout << *reinterpret_cast<int*>(str + 8);
	for (int i = 0; i < 8; i++)
	{
		str[i + 12] = randomAlpha[rand() % (sizeof(randomAlpha) - 1)];
		std::cout << str[i];
	}
	std::cout << std::endl;
	return (str);
}

Data *deserialize(void *raw)
{
	Data *data = new Data;

	data->s1.assign(static_cast<char*>(raw), 8);
	data->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	data->s2.assign(static_cast<char*>(raw) + 12, 8);
	return (data);
}

int main (void)
{
	char *srl = static_cast<char*>(serialize());
	Data *data = deserialize(srl);

	std::cout <<"s1: " << data->s1 << std::endl;
	std::cout <<"n: " << data->n << std::endl;
	std::cout <<"s2: " << data->s2 << std::endl;

	delete srl;
	delete data;

	return (0);
}