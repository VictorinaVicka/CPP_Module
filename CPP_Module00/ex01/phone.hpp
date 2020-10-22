/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:40:56 by tfarenga          #+#    #+#             */
/*   Updated: 2020/10/21 17:01:35 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
# define PHONE_HPP

# include "phonebook.hpp"

class Phone
{
private:
	Phonebook	phonebook[8];
public:
	Phone();
	void start(void);
	void exit(void);
	void add(void);
	void search(void);
};

#endif