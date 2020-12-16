/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 15:14:03 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/16 17:07:59 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>

class Span
{
	private:
		std::vector<int>	vector;
		unsigned int		newN;
	public:
		Span();
		~Span();
		Span(unsigned int N);
		Span(Span const &copy);
		Span &operator=(Span const &target);
		void addNumber(int number);
		int shortestSpan(void);
		int longestSpan(void);

	class DuplicateNumbersException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class VectorMaxException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class NotNumbersException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

};

#endif