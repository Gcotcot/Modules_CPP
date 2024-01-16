/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:12:28 by gcot              #+#    #+#             */
/*   Updated: 2023/10/25 14:12:30 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
# define Character_HPP

# include "ICharacter.hpp"

class Character : public ICharacter {

	private :
		std::string	name;
		AMateria	*slot[4];

	public :
		Character(void);
		Character(std::string const &new_name);
		Character(const Character &ref);
		Character &operator = (const Character &ref);
		~Character(void);
		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif
