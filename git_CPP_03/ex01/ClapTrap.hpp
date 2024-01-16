/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:10:45 by gcot              #+#    #+#             */
/*   Updated: 2023/10/13 16:28:02 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {

	public :
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &ref);
		ClapTrap &operator = (const ClapTrap &ref);
		~ClapTrap(void);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected :
		int health;
		int energy;
		int damage;
		std::string name;
};

#endif
