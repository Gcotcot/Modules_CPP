/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:45:57 by gcot              #+#    #+#             */
/*   Updated: 2023/09/18 13:05:57 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie {
	public :
		Zombie(std::string);
		~Zombie(void);
		void	announce(void);

	private :
		std::string	name;
};

void    randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
