/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:40:16 by gcot              #+#    #+#             */
/*   Updated: 2023/10/22 15:04:11 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
	// Exercice example
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	//const Animal* an = new Animal();

	std::cout << std::endl;

	delete dog;
	delete cat;
	std::cout << std::endl;
	std::cout << std::endl;



	// Array of animals
	const Animal	*animal_array[4];
	std::cout << std::endl;
	// Half filled with dogs
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;

	// Half filled with cats
	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;

	// This will fail because AAnimal is abstract!
	// const AAnimal a = new AAnimal();

}
