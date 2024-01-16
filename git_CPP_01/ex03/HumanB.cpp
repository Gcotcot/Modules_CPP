/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:19:28 by gcot              #+#    #+#             */
/*   Updated: 2023/09/18 16:51:05 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	if (weapon)
		std::cout << name << " attacks whit " << weapon->getType() << "\n";
	else
		std::cout << name << " attacks whit his fist\n";
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
