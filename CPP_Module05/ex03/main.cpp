/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:08:26 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/05 13:00:48 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern intern1;
    Intern intern2;
    Intern intern3;

    Form *form1;
    Form *form2;
    Form *form3;

    Bureaucrat bureaucrat("Dobby", 5);

	std::cout << bureaucrat << std::endl;
	std::cout << "<<<<<<<<<<<<<" << std::endl;

    form1 = intern1.makeForm("robotomy request", "Tom");
	std::cout << "<<<<<<<<<<<<<" << std::endl;

    try
    {
        form1->execute(bureaucrat);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
	std::cout << "<<<<<<<<<<<<<" << std::endl;

    std::cout << *form1 << std::endl;
    form2 = intern2.makeForm("presidential pardon", "Intern");
    std::cout << *form2 << std::endl;
    form3 = intern3.makeForm("shrubbery creation", "Intern");
    std::cout << *form3 << std::endl;
	std::cout << "<<<<<<<<<<<<<" << std::endl;

    form3 = intern2.makeForm("whatever form", "Intern");

	return (0);
}
