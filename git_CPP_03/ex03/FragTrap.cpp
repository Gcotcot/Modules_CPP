/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:10:35 by gcot              #+#    #+#             */
/*   Updated: 2023/10/13 16:53:27 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->name = "Default FragTrap";
	this->energy = 100;
	this->damage = 30;
	this->health = 100;
	std::cout << "Nice to meet you FragTrap " << this->name << "\n";
}

FragTrap::FragTrap(std::string new_name) : ClapTrap(new_name)
{
	this->name = new_name;
	this->energy = 100;
	this->damage = 30;
	this->health = 100;
	std::cout << "Nice to meet you FragTrap " << this->name << "\n";
}

FragTrap::FragTrap(const FragTrap &ref) : ClapTrap(ref)
{
	std::cout << "Copy constructor called\n";
	*this = ref;
}

FragTrap	&FragTrap::operator = (const FragTrap &ref)
{
	std::cout << "Copy assignment operator called\n";
	(void)ref;
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->name << " was destroy\n";
}

void	FragTrap::attack(const std::string& target)
{
	if (this->energy > 0 && this->health)
	{
		std::cout << "FragTrap " << this->name << " attack " << target << ", causing [" << this->damage << "] damage\n";
		this->energy--;
	}
	else
		std::cout << this->name << " empty energy\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " high fives\n";
}
