/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:10:45 by gcot              #+#    #+#             */
/*   Updated: 2023/10/13 16:28:02 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"


class	ScavTrap : virtual public ClapTrap {

	public :
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &ref);
		ScavTrap &operator = (const ScavTrap &ref);
		~ScavTrap(void);
		void	guardGate(void);
		void	attack(const std::string& target);
	
	protected :
		int	energy_s;
};

#endif
