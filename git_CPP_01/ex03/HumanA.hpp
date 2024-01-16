/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:22:07 by gcot              #+#    #+#             */
/*   Updated: 2023/09/18 16:45:20 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMAN_HPP

# include "Weapon.hpp"

class	HumanA {

	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void	attack(void);

	private :
		Weapon		*weapon;
		std::string	name;

};

#endif
