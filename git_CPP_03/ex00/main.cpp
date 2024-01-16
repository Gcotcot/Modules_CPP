/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:49:51 by gcot              #+#    #+#             */
/*   Updated: 2023/10/13 16:48:31 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	cal("bob");
	for (int i = 0; i < 20; i++)
		cal.attack("philip");
	for (int i = 0; i < 20; i++)
		cal.beRepaired(2);
	for (int i = 0; i < 20; i++)
		cal.takeDamage(2);
	return 0;
}
