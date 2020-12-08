/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:03:44 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/08 18:33:00 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
#define CAST_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include <stdexcept>
# include <iomanip>

class	Cast
{
	private:
		std::string	newType;
	public:
		Cast();
		~Cast();
		Cast(std::string type);
		Cast(const Cast &copy);
		Cast	&operator=(const Cast &target);
		void	getInt(void);
		void	getFloat(void);
		void	getDouble(void);
		void	getChar(void);

};

#endif