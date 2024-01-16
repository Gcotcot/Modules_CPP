/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:26:33 by gcot              #+#    #+#             */
/*   Updated: 2023/09/18 16:46:38 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->weapon = &weapon;
	this->name = name;
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks whit " << weapon->getType() << "\n";
}
