/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 18:13:36 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/23 17:58:47 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<class T>
MutantStack<T>::MutantStack()
{};

template<class T>
MutantStack<T>::MutantStack(const MutantStack &copy)
{
	*this = copy;
};

template<class T>
MutantStack<T>::~MutantStack()
{};

template<class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &target)
{
	this->c = target.c;
	return (*this);
}

template <typename T>
typename  MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T>
typename  MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}
