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
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	Animal	*array[100];
	delete j;
	delete i;
	std::cout << "-----Creating array of animals half dog half cat-----\n";
	for (int i = 0; i < 100; i++)
	{
		if (i < 100 / 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	std::cout << "-----Deleting array of animals-----\n";
	for (int i = 0; i < 100; i++)
		delete array[i];
	std::cout << "-----Testing deep copy of dog-----\n";
	Animal *dog1 = new Dog();
	Animal *dog2 = new Dog();
	*dog2 = *dog1;
	delete dog1;
	delete dog2;
	return (0);

}
