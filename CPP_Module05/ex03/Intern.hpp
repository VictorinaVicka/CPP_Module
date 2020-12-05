/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:33:21 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/05 12:20:09 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern
{
	private:
		Form*	newRobotomyRequest(const std::string target);
		Form*	newShrubberyCreation(const std::string target);
		Form*	newPresidentialPardon(const std::string target);

	public:
		Intern();
		virtual ~Intern();
		Intern(const Intern &copy);
		Intern &operator=(const Intern &target);
		Form*	makeForm(const std::string formName, const std::string goalForm);

		class FileInternNotException: public std::exception
		{
			public:
				FileInternNotException();
				virtual ~FileInternNotException() throw();
				FileInternNotException(const FileInternNotException &copy);
				FileInternNotException &operator=(const FileInternNotException &target);

				virtual const char* what() const throw();
		};
};

#endif