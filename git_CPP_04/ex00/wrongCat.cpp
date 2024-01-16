/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:24:07 by gcot              #+#    #+#             */
/*   Updated: 2023/10/22 13:32:23 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongCat.hpp"

wrongCat::wrongCat(void)
{
	std::cout << "Default wrongCat constructor call\n";
	this->type = "wrongCat";
}

wrongCat::wrongCat(const wrongCat &ref) : wrongAnimal(ref)
{
	std::cout << "wrongCat copy constructor call\n";
	*this = ref;
}

wrongCat	&wrongCat::operator = (const wrongCat &ref)
{
	this->type = ref.getType();
	return (*this);
}

wrongCat::~wrongCat(void)
{
	std::cout << "wrongCat destructor call\n";
}

void	wrongCat::makeSound(void) const
{
	std::cout << "Woooof !!\n";
}
