/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:49:11 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/04 16:35:50 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm();
		std::string	target;
	public:
		ShrubberyCreationForm(std::string &target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &target);
		void	execute(Bureaucrat const &executor) const;

		class FileOpenException: public std::exception
		{
			public:
				FileOpenException();
				virtual ~FileOpenException() throw();
				FileOpenException(const FileOpenException &copy);
				FileOpenException &operator=(const FileOpenException &target);

				virtual const char* what() const throw();
		};
};

#endif
