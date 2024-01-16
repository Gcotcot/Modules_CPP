/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:24:07 by gcot              #+#    #+#             */
/*   Updated: 2023/10/22 13:32:23 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog constructor call\n";
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &ref) : Animal(ref)
{
	std::cout << "Dog copy constructor call\n";
	*this = ref;
	this->brain = new Brain();
}

Dog	&Dog::operator = (const Dog &ref)
{
	(void)ref;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor call\n";
	delete this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouaff !!\n";
}
