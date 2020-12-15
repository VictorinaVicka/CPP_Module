/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:13:38 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/15 19:00:57 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <exception>
# include <vector>


class	OutOfRangeException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Element is out of the limits");
		}
};

template <typename T>
int easyfind(T cont, int const number)
{
	typename T::iterator iter;

	iter = std::find(cont.begin(), cont.end(), number);
	if (iter == cont.end())
		throw OutOfRangeException();
	return (*iter);
}

#endif