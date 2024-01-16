/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:14:14 by gcot              #+#    #+#             */
/*   Updated: 2023/09/18 16:43:13 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon {

	public :
		Weapon(std::string type);
		~Weapon(void);
		void			setType(std::string new_type);
		const std::string	getType(void);

	private :
		std::string	type;

};

#endif
