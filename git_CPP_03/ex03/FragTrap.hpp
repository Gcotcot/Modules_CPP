/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:10:45 by gcot              #+#    #+#             */
/*   Updated: 2023/10/13 16:28:02 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"


class	FragTrap : virtual public ClapTrap {

	public :
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &ref);
		FragTrap &operator = (const FragTrap &ref);
		~FragTrap(void);
		void	highFivesGuys(void);
		void	attack(const std::string& target);
};

#endif
