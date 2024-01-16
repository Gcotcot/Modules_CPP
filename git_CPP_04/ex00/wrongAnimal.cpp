/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:24:07 by gcot              #+#    #+#             */
/*   Updated: 2023/10/22 13:32:23 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal(void)
{
	std::cout << "Default wrongAnimal constructor call\n";
	this->type = "wrongAnimal default";
}

wrongAnimal::wrongAnimal(std::string new_type)
{
	std::cout << "wrongAnimal constructor with type : " << new_type << "\n";
	this->type = new_type;
}

wrongAnimal::wrongAnimal(const wrongAnimal &ref)
{
	std::cout << "wrongAnimal copy constructor call\n";
	*this = ref;
}

wrongAnimal	&wrongAnimal::operator = (const wrongAnimal &ref)
{
	this->type = ref.getType();
	return (*this);
}

wrongAnimal::~wrongAnimal(void)
{
	std::cout << "wrongAnimal destructor call\n";
}

void	wrongAnimal::makeSound(void) const
{
	std::cout << "wrongAnimal make sound but i don't reconize it\n";
}

std::string	wrongAnimal::getType(void) const
{
	return (this->type);
}
