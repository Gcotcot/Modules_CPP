/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:10:35 by gcot              #+#    #+#             */
/*   Updated: 2023/10/13 16:53:27 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->name = "Default ClapTrap";
	this->energy = 10;
	this->damage = 0;
	this->health = 10;
	std::cout << "Nice to meet you Claptrap " << this->name << "\n";
}

ClapTrap::ClapTrap(std::string new_name)
{
	this->name = new_name;
	this->energy = 10;
	this->damage = 0;
	this->health = 10;
	std::cout << "Nice to meet you Claptrap " << this->name << "\n";
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	std::cout << "Copy constructor called\n";
	*this = ref;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &ref)
{
	std::cout << "Copy assignment operator called\n";
	(void)ref;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->name << " was destroy\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy > 0 && this->health)
	{
		std::cout << "ClapTrap " << this->name << " attack " << target << ", causing [" << this->damage << "] damage\n";
		this->energy--;
	}
	else
		std::cout << this->name << " empty energy\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " take [" << amount << "] damage\n";
	this->health -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy > 0 && this->health)
	{
		std::cout << this->name << " repair [" << amount << "] pv\n";
		this->energy--;
		this->health += amount;
	}
	else
		std::cout << this->name << " empty energy\n";
}
