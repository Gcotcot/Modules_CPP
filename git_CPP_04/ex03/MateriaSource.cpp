/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:43:28 by gcot              #+#    #+#             */
/*   Updated: 2023/10/25 14:43:29 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (unsigned int i = 0; i < 4; i++)
		this->slot[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &ref)
{
	*this = ref;
	for (unsigned int i = 0; i < 4; i++)
		this->slot[i] = 0;
}

MateriaSource	&MateriaSource::operator = (const MateriaSource &ref)
{
	*this = ref;
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (unsigned int i = 0; i < 4; i++)
		if (this->slot[i])
			delete this->slot[i];
}

void	MateriaSource::learnMateria(AMateria *m)
{
	unsigned int	i = 0;

	if (!m)
	{
		std::cout << "Can't lear materia\n";
		return ;
	}
	while (i < 4 && this->slot[i] != 0)
		i++;
	if (i == 4)
	{
		std::cout << "Can't learn more materia\n";
		return ;
	}
	this->slot[i] = m;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	unsigned int	i = 0;

	while (i < 4)
	{
		if (this->slot[i] && this->slot[i]->getType() == type)
			break ;
		i++;
	}
	if (i >= 4)
	{
		std::cout << "You don't know how to create " << type << "\n";
		return (NULL);
	}
	AMateria *ret = this->slot[i]->clone();
	return (ret);
}
