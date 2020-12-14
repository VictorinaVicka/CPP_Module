/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 11:10:56 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/14 12:21:17 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>

template <typename T>
void swap (T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min (T &a, T &b)
{
	if (a >= b)
		return (b);
	else
		return (a);
}

template <typename T>
T max (T &a, T &b)
{
	if (a <= b)
		return (b);
	else
		return (a);
}

#endif