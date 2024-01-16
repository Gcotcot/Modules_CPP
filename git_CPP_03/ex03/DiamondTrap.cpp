/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:10:35 by gcot              #+#    #+#             */
/*   Updated: 2023/10/13 16:53:27 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->name = "Default DiamondTrap";
	this->energy_s = ScavTrap::energy_s;
	this->damage = FragTrap::damage;
	this->health = FragTrap::health;
	this->ClapTrap::name = this->name + "_clap_name";
	this->energy = this->energy_s;
	std::cout << "Nice to meet you DiamondTrap " << this->name << "\n";
}

DiamondTrap::DiamondTrap(std::string new_name) : ClapTrap(new_name), ScavTrap(new_name), FragTrap(new_name)
{
	this->name = new_name;
	this->energy_s = ScavTrap::energy_s;
	this->damage = FragTrap::damage;
	this->health = FragTrap::health;
	this->ClapTrap::name = new_name + "_clap_name";
	this->energy = this->energy_s;
	std::cout << "Nice to meet you DiamondTrap " << this->name << "\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref) : ClapTrap(ref), ScavTrap(ref), FragTrap(ref)
{
	std::cout << "Copy constructor called\n";
	*this = ref;
}

DiamondTrap	&DiamondTrap::operator = (const DiamondTrap &ref)
{
	std::cout << "Copy assignment operator called\n";
	(void)ref;
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->name << " was destroy\n";
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Diamond name : " << this->name << "\n";
	std::cout << "Clap name : " << this->ClapTrap::name << "\n";
}

void	DiamondTrap::info(void)
{
	std::cout << "Diamond name : " << this->name << "\n";
	std::cout << "Diamond damage : " << this->damage << "\n";
	std::cout << "Diamond energy : " << this->energy << "\n";
	std::cout << "Diamond health : " << this->health << "\n";
}
