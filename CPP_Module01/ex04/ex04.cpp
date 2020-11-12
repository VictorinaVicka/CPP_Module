/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:34:31 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/12 16:55:32 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *pointer;

	pointer = &str;
	std::cout << "Pointer: " << *pointer << std::endl;

	std::string &reference = str;
	std::cout << "Reference: " << reference << std::endl;
	return (0);
}