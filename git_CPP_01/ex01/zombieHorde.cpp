/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:35:51 by gcot              #+#    #+#             */
/*   Updated: 2023/09/18 14:58:34 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{

	Zombie	*new_zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		new_zombie[i].set_name(name);
		new_zombie[i].announce();
	}
	return (new_zombie);
}
