/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:40:56 by tfarenga          #+#    #+#             */
/*   Updated: 2020/10/22 13:12:20 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
# define PHONE_HPP

# include "phonebook.hpp"

class Phone
{
private:
	Phonebook	contacts[8];
	int			contact;
public:
	Phone();
	void start(void);
	void table(void);
	void add(void);
	void search(void);
};

#endif