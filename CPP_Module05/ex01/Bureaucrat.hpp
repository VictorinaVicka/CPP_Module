/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:08:23 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/03 18:13:26 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
	private:
		Bureaucrat();
		std::string	const newName;
		int			newGrade;
	public:
		Bureaucrat(std::string const &name, int grade);
		virtual ~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &target);

		void			signForm(Form &form);

		std::string		getName(void) const;
		int				getGrade(void) const;
		void			highGrade(void);
		void			lowGrade(void);

		class	GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				virtual ~GradeTooHighException() throw();
				GradeTooHighException(const GradeTooHighException &copy);
				GradeTooHighException &operator=(const GradeTooHighException &target);

				virtual	const char *what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException();
				virtual ~GradeTooLowException() throw();
				GradeTooLowException(const GradeTooLowException &copy);
				GradeTooLowException &operator=(const GradeTooLowException &target);

				virtual	const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &br);

#endif