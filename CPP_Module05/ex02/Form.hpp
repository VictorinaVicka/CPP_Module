/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:55:35 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/04 15:08:59 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form;
# include "Bureaucrat.hpp"

class	Form
{
	private:
		Form();
		std::string const	newName;
		bool				_signed;
		int	const 			signGrade;
		int	const 			execGrade;
	public:
		Form(std::string const &name, int const signGrade, int execGrade);
		virtual ~Form();
		Form(const Form &copy);
		Form &operator=(const Form &target);

		std::string const	&getName(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		bool				getSigned(void);
		void				beSigned(Bureaucrat const &bureaucrat);

		virtual void		execute(Bureaucrat const &executor) const;

		class	GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				virtual ~GradeTooHighException() throw();
				GradeTooHighException(const GradeTooHighException &copy);
				GradeTooHighException &operator=(const GradeTooHighException &target);

				virtual	const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException();
				virtual ~GradeTooLowException() throw();
				GradeTooLowException(const GradeTooLowException &copy);
				GradeTooLowException &operator=(const GradeTooLowException &target);

				virtual	const char* what() const throw();
		};
		class	AlreadySignedException : public std::exception
		{
			public:
				AlreadySignedException();
				virtual ~AlreadySignedException() throw();
				AlreadySignedException(const AlreadySignedException &copy);
				AlreadySignedException &operator=(const AlreadySignedException &target);

				virtual	const char* what() const throw();
		};
};
std::ostream &operator<<(std::ostream &out, Form const &form);

#endif
