/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 12:24:34 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/14 13:16:21 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>

template <typename T>
void iter (T *array, int lengthArray, void (*f)(T const &element))
{
	for (int i = 0; i < lengthArray; i++)
		(*f)(array[i]);
	// std::cout << std::endl;
}

template <typename T>
void element(T const &el)
{
	std::cout << el << " ";
}

#endif