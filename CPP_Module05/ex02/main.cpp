/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:08:26 by tfarenga          #+#    #+#             */
/*   Updated: 2020/12/04 16:23:20 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	std::string target;

	Bureaucrat dobby1("Dobby1", 1);
	target = "house1";
	std::cout << dobby1 << std::endl;
	ShrubberyCreationForm scf(target);
	dobby1.signForm(scf);
	scf.execute(dobby1);

	Bureaucrat dobby2("Dobby2", 20);
	std::cout << dobby2 << std::endl;
	target = "house2";
	RobotomyRequestForm rrf(target);
	dobby2.signForm(rrf);
	rrf.execute(dobby2);

	Bureaucrat dobby3("Dobby3", 1);
	std::cout << dobby3 << std::endl;
	target = "house3";
	PresidentialPardonForm ppf(target);
	ppf.beSigned(dobby3);
	ppf.execute(dobby3);

    PresidentialPardonForm pres = PresidentialPardonForm(target);
	try
    {
        dobby1.signForm(pres);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        pres.beSigned(dobby2);
        pres.execute(dobby2);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

	return (0);
}
