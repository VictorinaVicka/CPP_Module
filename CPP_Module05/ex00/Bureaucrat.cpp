/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:08:19 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/03 17:39:47 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : newName(name), newGrade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High Exception");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low Exception");
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : newName(copy.newName), newGrade(copy.newGrade)
{
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &target)
{
	newGrade = target.newGrade;
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return (newName);
}

int Bureaucrat::getGrade(void) const
{
	return (newGrade);
}

void Bureaucrat::highGrade(void)
{
	if (newGrade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	newGrade--;
}

void Bureaucrat::lowGrade(void)
{
	if (newGrade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	newGrade++;
}
//
Bureaucrat::GradeTooHighException::GradeTooHighException()
{}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &copy)
{
	*this = copy;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException &target)
{
	(void)target;
	return (*this);
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &copy)
{
	*this = copy;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException &target)
{
	(void)target;
	return (*this);
}
//
std::ostream &operator<<(std::ostream &out, Bureaucrat const &br)
{
	return (out << br.getName() << ", bureaucrat grade " << br.getGrade() << "!!!");
}
