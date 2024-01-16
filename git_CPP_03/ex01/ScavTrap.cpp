/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:10:35 by gcot              #+#    #+#             */
/*   Updated: 2023/10/13 16:53:27 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->name = "Default ScavTrap";
	this->energy = 50;
	this->damage = 20;
	this->health = 100;
	std::cout << "Nice to meet you ScavTrap " << this->name << "\n";
}

ScavTrap::ScavTrap(std::string new_name) : ClapTrap(new_name)
{
	this->name = new_name;
	this->energy = 50;
	this->damage = 20;
	this->health = 100;
	std::cout << "Nice to meet you ScavTrap " << this->name << "\n";
}

ScavTrap::ScavTrap(const ScavTrap &ref) : ClapTrap(ref)
{
	std::cout << "Copy constructor called\n";
	*this = ref;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &ref)
{
	std::cout << "Copy assignment operator called\n";
	(void)ref;
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->name << " was destroy\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energy > 0 && this->health)
	{
		std::cout << "ScavTrap " << this->name << " attack " << target << ", causing [" << this->damage << "] damage\n";
		this->energy--;
	}
	else
		std::cout << this->name << " empty energy\n";
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " is now in guard mod\n";
}
