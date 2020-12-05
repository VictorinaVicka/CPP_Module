/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:33:26 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/05 12:46:44 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::~Intern()
{}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern& Intern::operator=(const Intern& target)
{
	(void)target;
	return (*this);
}

Form* Intern::newRobotomyRequest(const std::string target)
{
	Form *form = new RobotomyRequestForm(target);
	return (form);
}

Form* Intern::newShrubberyCreation(const std::string target)
{
	Form *form = new ShrubberyCreationForm(target);
	return (form);
}

Form* Intern::newPresidentialPardon(const std::string target)
{
	Form *form = new PresidentialPardonForm(target);
	return (form);
}

Form* Intern::makeForm(const std::string formName, const std::string goalForm)
{
	typedef Form* (Intern::*tpf) (const std::string goalForm);
	std::string names[3] = {"shrubbery creation",
							"robotomy request",
							"presidential pardon"};
	tpf forms[3];
	forms[0] = &Intern::newShrubberyCreation;
	forms[1] = &Intern::newRobotomyRequest;
	forms[2] = &Intern::newPresidentialPardon;
	for (int i = 0; i < 3; i++)
	{
		if (formName == names[i])
		{
			std::cout << "Intern creates a " << formName << std::endl;
			return ((this->*forms[i])(goalForm));
		}
	}
	std::cout << "This form does not exist." << std::endl;
	// throw (Intern::FileInternNotException());
	return (NULL);
}


const char *Intern::FileInternNotException::FileInternNotException::what() const throw()
{
	return ("Not exist");
}

Intern::FileInternNotException::FileInternNotException()
{}

Intern::FileInternNotException::~FileInternNotException() throw()
{}

Intern::FileInternNotException::FileInternNotException(const FileInternNotException &copy)
{
	*this = copy;
}

Intern::FileInternNotException &Intern::FileInternNotException::operator=(const FileInternNotException &target)
{
	(void)target;
	return (*this);
}
