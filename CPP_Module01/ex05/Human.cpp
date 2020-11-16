/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:09:16 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/16 11:39:12 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{}

Human::~Human()
{}

Brain& Human::getBrain(void)
{
	return (piople);
}

std::string Human::identify(void)
{
	return (piople.identify());
}
