/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:07:49 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/09 20:01:05 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

class Base
{
public:
	virtual ~Base();
};

class A : public Base
{
	virtual ~A();
};

class B : public Base
{
	virtual ~B();
};

class C : public Base
{
	virtual ~C();
};

#endif