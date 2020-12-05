/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:55:32 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/05 12:08:06 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : signGrade(1), execGrade(1)
{
	_signed = false;
}

Form::~Form()
{}

Form::Form(std::string const &name, int const signGrade, int execGrade)
: newName(name), _signed(0), signGrade(signGrade), execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	_signed = false;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High Exception");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low Exception");
}

const char* Form::AlreadySignedException::what() const throw()
{
	return ("Already Signed Exception");
}

Form::Form(const Form &copy)
: newName(copy.newName), signGrade(copy.signGrade), execGrade(copy.execGrade)
{
	if (copy.signGrade < 1 || copy.execGrade < 1)
		throw Form::GradeTooHighException();
	if (copy.signGrade > 150 || copy.execGrade> 150)
		throw Form::GradeTooLowException();
	*this = copy;
}

Form &Form::operator=(const Form &target)
{
	_signed = target._signed;
	return (*this);
}

std::string	Form::getName(void) const
{
	return (newName);
}

int Form::getSignGrade(void) const
{
	return (signGrade);
}

int	Form::getExecGrade(void) const
{
	return (execGrade);
}

bool Form::getSigned(void) const
{
	return (_signed);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (_signed)
		throw Form::AlreadySignedException();
	if (bureaucrat.getGrade() > signGrade)
		throw Form::GradeTooLowException();
	std::cout << "<Form signed>" << std::endl;
	_signed = true;
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << form.getName() << ", Form SIGN grade is " << form.getSignGrade();
	out << ", and Form EXECUTE grade is " << form.getExecGrade();
	return (out);
}

void Form::execute(Bureaucrat const &executor) const
{
	if (_signed == 0)
		std::cout << "Sign the form first!" << std::endl;
	if (executor.getGrade() > signGrade)
		throw Form::GradeTooLowException();
}

//

Form::GradeTooHighException::GradeTooHighException()
{}

Form::GradeTooHighException::~GradeTooHighException() throw()
{}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &copy)
{
	*this = copy;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(const GradeTooHighException &target)
{
	(void)target;
	return (*this);
}

Form::GradeTooLowException::GradeTooLowException()
{}

Form::GradeTooLowException::~GradeTooLowException() throw()
{}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &copy)
{
	*this = copy;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(const GradeTooLowException &target)
{
	(void)target;
	return (*this);
}

Form::AlreadySignedException::AlreadySignedException()
{}

Form::AlreadySignedException::~AlreadySignedException() throw()
{}

Form::AlreadySignedException::AlreadySignedException(const AlreadySignedException &copy)
{
	*this = copy;
}

Form::AlreadySignedException &Form::AlreadySignedException::operator=(const AlreadySignedException &target)
{
	(void)target;
	return (*this);
}
