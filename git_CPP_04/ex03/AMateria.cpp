/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:47:02 by gcot              #+#    #+#             */
/*   Updated: 2023/10/23 14:24:59 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->type = "void";
}

AMateria::AMateria(std::string const &new_type)
{
	this->type = new_type;
}

AMateria::AMateria(const AMateria &ref)
{
	*this = ref;
}

AMateria	&AMateria::operator = (const AMateria &ref)
{
	this->type = ref.getType();
	return (*this);
}

AMateria::~AMateria(void)
{
}

std::string const	&AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Use of " << this->getType() << " on " << target.getName() << std::endl;
}
