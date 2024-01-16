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
#include "Intern.hpp"


void	sectionTitle(const std::string& title) {
	std::cout	<< std::endl
				<< "*** " << title << " ***"
				<< std::endl << std::endl;
}

Bureaucrat	burro("burro", 42);
Intern		interno;

void	testMake(const std::string& formName, const std::string& target) {
	sectionTitle(formName);

	Form* form = interno.makeForm(formName, target);

	std::cout << *form;

	delete form;
}

int	main() {
	try {
		testMake("robotomy request", "Bender");
		testMake("presidential request", "lrocca");
		testMake("shrubbery request", "home");
		testMake("not a form", "you");
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}
