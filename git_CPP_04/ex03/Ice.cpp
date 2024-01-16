/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:37:32 by gcot              #+#    #+#             */
/*   Updated: 2023/10/25 13:37:34 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	this->type = "ice";
}

Ice::Ice(std::string const &new_type) : AMateria(new_type)
{
	this->type = new_type;
}

Ice::Ice(const Ice &ref) : AMateria(ref)
{
	*this = ref;
}

Ice	&Ice::operator = (const Ice &ref)
{
	this->type = ref.getType();
	return (*this);
}

Ice::~Ice(void)
{
}

Ice	*Ice::clone(void) const
{
	Ice	*new_ice = new Ice;
	return (new_ice);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
