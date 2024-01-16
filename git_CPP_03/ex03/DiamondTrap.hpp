/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:10:45 by gcot              #+#    #+#             */
/*   Updated: 2023/10/13 16:28:02 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"


class	DiamondTrap : public ScavTrap, public FragTrap {

	public :
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &ref);
		DiamondTrap &operator = (const DiamondTrap &ref);
		~DiamondTrap(void);
		void	whoAmI(void);
		void	info(void);
		using	ScavTrap::attack;
		
	private :
		std::string	name;
};

#endif
