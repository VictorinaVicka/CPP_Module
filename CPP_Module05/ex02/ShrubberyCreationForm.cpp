/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:49:07 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/04 16:28:25 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("SCF", 145, 137)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target)
: Form("SCF", 145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
: Form(copy.getName(), 145, 137)
{
	*this = copy;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &target)
{
	Form::operator=(target);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string		nameFile;
	std::ofstream	ofs;
	std::string		tree[1] = {
	"         A\n" \
	"        d$b\n" \
	"      .d\\$b.\n" \
	"       d$$@b\n" \
	"      d\\$$ib\n" \
	"    .d$$\\$$$b\n" \
	"   .d$$$\\$$ib.\n" \
	"        ##\n"};

	Form::execute(executor);
	nameFile = target + "_shrubbery";
	ofs.open(nameFile);
	if (!ofs.is_open())
		return ;
	ofs << tree[0];
	ofs.close();
}

const char *ShrubberyCreationForm::FileOpenException::FileOpenException::what()
	const throw()
{
	return ("Unable to open file ShrubberyCreationForm");
}

ShrubberyCreationForm::FileOpenException::FileOpenException()
{}

ShrubberyCreationForm::FileOpenException::~FileOpenException() throw()
{}

ShrubberyCreationForm::FileOpenException::FileOpenException(const FileOpenException &copy)
{
	*this = copy;
}

ShrubberyCreationForm::FileOpenException &ShrubberyCreationForm::FileOpenException::operator=(const FileOpenException &target)
{
	(void)target;
	return (*this);
}
