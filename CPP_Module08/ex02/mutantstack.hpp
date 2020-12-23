/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 18:13:39 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/23 17:58:30 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <iterator>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
            MutantStack();
            ~MutantStack();
            MutantStack(const MutantStack<T> &copy);
			MutantStack<T> &operator=(const MutantStack<T> &target);

			typedef typename std::stack<T>::container_type::iterator iterator;
			iterator begin();
			iterator end();
};

#endif