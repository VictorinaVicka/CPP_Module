/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 13:54:36 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/14 16:34:40 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <exception>

template <typename T>
class Array
{
	private:
		unsigned int	newN;
		T 				*array;

	public:
		Array()
		{
			array = new T[0];
			newN = 0;
		}

		Array(unsigned int n)
		{
			newN = n;
			array = new T[newN];
		}

		virtual ~Array()
		{
			delete []array;
		}

		Array(const Array &copy)
		{
			newN = 0;
			array = 0;
			*this = copy;
		}

		Array &operator=(const Array &target)
		{
			unsigned int i = 0;

			if (array)
				delete[]array;
			newN = target.newN;
			array = new T[newN];
			while (i < newN)
			{
				array[i] = target.array[i];
				i++;
			}
			return (*this);
		}

		T &operator[](unsigned int i)
		{
			if ((newN <= i) || !(array))
				throw Array<T>::OutOfRangeException();
			return (array[i]);
		}

		class	OutOfRangeException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("element is out of the limits");
				}
		};

		unsigned int size(void)
		{
			return (newN);
		}
};

#endif