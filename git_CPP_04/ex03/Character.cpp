/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:17:34 by gcot              #+#    #+#             */
/*   Updated: 2023/10/25 14:17:36 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	this->name = "Unknow";
	for (unsigned int i = 0; i < 4; i++)
		this->slot[i] = 0;
}

Character::Character(std::string const &new_name)
{
	this->name = new_name;
	for (unsigned int i = 0; i < 4; i++)
		this->slot[i] = 0;
}

Character::Character(const Character &ref)
{
	*this = ref;
}

Character	&Character::operator = (const Character &ref)
{
	this->name = ref.getName();
	for (unsigned int i = 0; i < 4; i++)
		this->slot[i] = ref.slot[i];
	return (*this);
}

Character::~Character(void)
{
	for (unsigned int i = 0; i < 4; i++)
		if (this->slot[i])
			delete this->slot[i];
}

std::string const &Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	unsigned int	i = 0;

	if (!m)
	{
		std::cout << "Try to equip nothing\n";
		return ;
	}
	while (i < 4 && this->slot[i] != 0)
		i++;
	if (i == 4)
	{
		std::cout << "Inventory full\n";
		return ;
	}
	this->slot[i] = m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Can't unequip cause you'r not in your inventory\n";
		return ;
	}
	if (!this->slot[idx])
	{
		std::cout << "Nothing equip here\n";
		return ;
	}
	AMateria	*temp = this->slot[idx];
	this->slot[idx] = 0;
	std::cout << "Leave equipement " << temp->getType() << "\n";
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Can't use cause you'r not in your inventory\n";
		return ;
	}
	if (!this->slot[idx])
	{
		std::cout << "Nothing equip here\n";
		return ;
	}
	this->slot[idx]->use(target);
}
