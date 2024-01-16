/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:49:51 by gcot              #+#    #+#             */
/*   Updated: 2023/10/22 14:12:22 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	cal("bob");
	FragTrap	frag("titi");
	frag.attack("test");
	/*
	for (int i = 0; i < 20; i++)
		cal.beRepaired(2);
	for (int i = 0; i < 20; i++)
		cal.takeDamage(2);*/
	cal.info();
	cal.whoAmI();
	return 0;
}
