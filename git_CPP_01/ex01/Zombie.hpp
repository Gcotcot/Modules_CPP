/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:45:57 by gcot              #+#    #+#             */
/*   Updated: 2023/09/18 14:59:06 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie {
	public :
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	set_name(std::string name);

	private :
		std::string	name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
