/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:20:39 by gcot              #+#    #+#             */
/*   Updated: 2023/10/22 13:30:57 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal {

	public :
		Animal(void);
		Animal(std::string new_type);
		Animal(const Animal &ref);
		Animal &operator = (const Animal &ref);
		virtual ~Animal(void) = 0;
		void	virtual makeSound(void) const = 0;
		std::string	getType(void) const;

	protected :
		std::string	type;

};

#endif
