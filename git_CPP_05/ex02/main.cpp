/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:40:16 by gcot              #+#    #+#             */
/*   Updated: 2023/10/22 13:41:24 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	sectionTitle(const std::string& title) {
	std::cout	<< std::endl
				<< "*** " << title << " ***"
				<< std::endl << std::endl;
}

void	testForm(Bureaucrat& bureaucrat, Form& form) {
	bureaucrat.signForm(form);
	std::cout << form;
	bureaucrat.executeForm(form);
}

int	main() {
	Bureaucrat	burro("burro", 1);
	Bureaucrat	burretto("burretto", 42);
	std::cout << burro << burretto;

	try {
		{
			sectionTitle("shrubbery creation");
			ShrubberyCreationForm form("home");
			testForm(burro, form);
		}
		{
			for(unsigned int i = 0; i < 10; i++)
			{
				sectionTitle("robotomy request");
				RobotomyRequestForm form("Bender");
				testForm(burro, form);
			}
		}
		{
			sectionTitle("presidential pardon");
			PresidentialPardonForm form("lrocca");
			testForm(burro, form);
		}
		PresidentialPardonForm form("lrocca");
		{
			sectionTitle("execute unsigned form");
			std::cout << form;
			burro.executeForm(form);
		}
		{
			sectionTitle("too low to execute");
			burro.signForm(form);
			burretto.executeForm(form);
		}
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}
