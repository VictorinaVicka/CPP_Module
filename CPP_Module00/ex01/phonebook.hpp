/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 11:02:04 by tfarenga          #+#    #+#             */
/*   Updated: 2020/10/22 16:49:06 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Phonebook
{
private:
	int		i;
	std::string info[11];
	static const std::string fields[];
public:
	Phonebook();

	void	table(void);
	void	print(void);
	bool	data(int i);
};

#endif