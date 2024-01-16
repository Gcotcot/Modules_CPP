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

void	sectionTitle(const std::string& title) {
	std::cout	<< std::endl
				<< "*** " << title << " ***"
				<< std::endl << std::endl;
}

int	main() {
	sectionTitle("constructor");

	try {
		Bureaucrat	pippo("pippo", 1);
		std::cout << pippo;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		Bureaucrat	poppi("poppi", -42);
		std::cout << poppi;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}


	try {
		Bureaucrat	poppi("poppi", 4242);
		std::cout << poppi;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	sectionTitle("increment");

	try {
		Bureaucrat	pippo("pippo", 12);
		std::cout << pippo;
		pippo.increment(pippo, 10);
		std::cout << pippo;
		pippo.increment(pippo, 1);
		std::cout << pippo;
		pippo.increment(pippo, 1); // too high!
		std::cout << pippo;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	sectionTitle("decrement");

	try {
		Bureaucrat	pippo("pippo", 139);
		std::cout << pippo;
		pippo.decrement(pippo, 10);
		std::cout << pippo;
		pippo.decrement(pippo, 1);
		std::cout << pippo;
		pippo.decrement(pippo, 1); // too low!
		std::cout << pippo;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}
