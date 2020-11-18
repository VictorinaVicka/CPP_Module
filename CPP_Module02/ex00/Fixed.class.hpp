/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:45:33 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/18 15:40:17 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{
	private:
		int	fixed_point_value;
		static const int bits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator = (const Fixed &fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif