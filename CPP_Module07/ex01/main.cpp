/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 12:24:31 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/14 13:50:05 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// class Awesome
// {
// public:
// Awesome( void ) : _n( 42 ) { return; }
// int get( void ) const { return this->_n; }
// private:
// int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main() {
// int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// Awesome tab2[5];

// iter( tab, 5, print );
// iter( tab2, 5, print );

// return 0;
// }

int main (void)
{
	int x1[4] = {0, 1, 2, 3};
	iter(x1, 4, element);
	std::cout << '\n' << "<<<<<<<<<<<<<<<<<<<" << std::endl;

	float x2[4] = {0.1f, 12.1f, 22.2f, 33.3f};
	iter(x2, 4, element);
	std::cout << '\n' << "<<<<<<<<<<<<<<<<<<<" << std::endl;

	double x3[4] = {-0.1, -2.2, -3.3, -4.4};
	iter(x3, 4, element);
	std::cout << '\n' << "<<<<<<<<<<<<<<<<<<<" << std::endl;

	std::string x4[4] = {"a", "b", "c", "d"};
	iter(x4, 4, element);
	std::cout << std::endl;
	return (0);
}
