/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:24:18 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/11 14:17:44 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int age, std::string color):
name(name), age(age), color(color)
{
     std::cout << "|..Constructor called..|" << std::endl;
}

Pony::~Pony()
{
     std::cout << "|..Destructor called..|" << std::endl;
}

void Pony::names(void) const
{
	std::string name;

	name = getName();
    std::cout << "My name is "  << name << std::endl;
}

void Pony::years(void) const
{
	int age;
	age = getAge();
	std::cout << "I am "  << age <<  " years old!!" << std::endl;
}

void Pony::colors(void) const
{
	std::string color;
	color = getColor();
	std::cout << "My color is " << color << std::endl;
}

void Pony::setAge(int age)
{
    this->age = age;
}

int Pony::getAge(void) const
{
    return (this->age);
}

void Pony::setName(std::string name)
{
	this->name = name;
}

std::string Pony::getName(void) const
{
	return (this->name);
}

void Pony::setColor(std::string color)
{
	this->color = color;
}

std::string Pony::getColor(void) const
{
	return (this->color);
}