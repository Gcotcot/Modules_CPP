/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:24:07 by gcot              #+#    #+#             */
/*   Updated: 2023/10/22 13:32:23 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Cat constructor call\n";
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &ref) : Animal(ref)
{
	std::cout << "Cat copy constructor call\n";
	*this = ref;
	this->brain = new Brain();
}

Cat	&Cat::operator = (const Cat &ref)
{
	this->type = ref.getType();
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor call\n";
	delete this->brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaouuu !!\n";
}
