/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 15:14:00 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/16 18:11:02 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
{
	vector.reserve(0);
	newN = 0;
}

Span::~Span()
{}

Span::Span(unsigned int N)
{
	vector.reserve(N);
	newN = N;
}

Span::Span(Span const &copy)
{
	*this = copy;
}

Span &Span::operator=(Span const &target)
{
	vector = target.vector;
	newN = target.newN;
	return (*this);
}


const char* Span::DuplicateNumbersException::what() const throw()
{
	return ("Duplicate numbers");
}

const char* Span::VectorMaxException::what() const throw()
{
	return ("The vector is full");
}

const char* Span::NotNumbersException::what() const throw()
{
	return ("Add more numbers");
}

void Span::addNumber(int number)
{
	if (vector.size() >= newN)
		throw Span::VectorMaxException();

	int tmp = static_cast<int>(number);
	std::vector<int>::iterator iter = std::find(vector.begin(), vector.end(), tmp);
	if (iter != vector.end())
		throw Span::DuplicateNumbersException();

	vector.push_back(number);
}

int	Span::shortestSpan(void)
{
	if (vector.size() < 2)
		throw Span::NotNumbersException();
	std::vector<int>::iterator iter = vector.begin();
	std::vector<int>::iterator iterNext = ++(vector.begin());
	int shortInterval = std::abs(*iterNext - *iter);
	*iter++;
	*iterNext++;
	int tmp = std::abs(*iterNext - *iter);
	while (iterNext != vector.end())
	{
		if (tmp < shortInterval)
			shortInterval = tmp;
		*iter++;
		*iterNext++;
	}
	return (shortInterval);
}

int	Span::longestSpan(void)
{
	int resu;

	if (vector.size() < 2)
		throw Span::NotNumbersException();
	int maxElement = *std::max_element(vector.begin(), vector.end());
	int minElement = *std::min_element(vector.begin(), vector.end());
	resu = maxElement - minElement;
	return (resu);
}
