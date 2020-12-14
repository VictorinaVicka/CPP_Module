/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 11:09:46 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/14 13:12:31 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// class
// Awesome {
// public:
// Awesome( int n ) : _n( n ) {}
// bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
// bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
// bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
// bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
// bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
// bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
// int getN() const { return (this->_n); }

// private:
// int _n;
// };

// std::ostream &operator<<(std::ostream &out, Awesome const &aw)
// {
//     out << aw.getN();
//     return (out);
// }

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	// Awesome a(1);
	// Awesome b(2);
    // std::cout << "a = " << a << ", b = " << b << std::endl;
    // ::swap(a, b);
    // std::cout << "a = " << a << ", b = " << b << std::endl;
    // std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	return (0);
}