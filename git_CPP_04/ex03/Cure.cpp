/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:37:32 by gcot              #+#    #+#             */
/*   Updated: 2023/10/25 13:37:34 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	this->type = "cure";
}

Cure::Cure(std::string const &new_type) : AMateria(new_type)
{
	this->type = new_type;
}

Cure::Cure(const Cure &ref) : AMateria(ref)
{
	*this = ref;
}

Cure	&Cure::operator = (const Cure &ref)
{
	this->type = ref.getType();
	return (*this);
}

Cure::~Cure(void)
{
}

Cure	*Cure::clone(void) const
{
	Cure	*new_cure = new Cure;
	return (new_cure);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
