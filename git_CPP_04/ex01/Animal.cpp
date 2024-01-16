/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:24:07 by gcot              #+#    #+#             */
/*   Updated: 2023/10/22 13:32:23 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default animal constructor call\n";
	this->type = "Animal default";
}

Animal::Animal(std::string new_type)
{
	std::cout << "Animal constructor with type : " << new_type << "\n";
	this->type = new_type;
}

Animal::Animal(const Animal &ref)
{
	std::cout << "Animal copy constructor call\n";
	*this = ref;
}

Animal	&Animal::operator = (const Animal &ref)
{
	this->type = ref.getType();
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor call\n";
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal make sound but i don't reconize it\n";
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
