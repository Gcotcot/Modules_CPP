/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:59:59 by gcot              #+#    #+#             */
/*   Updated: 2023/09/18 13:29:00 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie(std::string new_name)
{
	Zombie	*new_zombie = new Zombie(new_name);

	new_zombie->announce();
	return (new_zombie);
}
