/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:20:39 by gcot              #+#    #+#             */
/*   Updated: 2023/10/22 13:30:57 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef wrongAnimal_HPP
# define wrongAnimal_HPP

# include <iostream>

class	wrongAnimal {

	public :
		wrongAnimal(void);
		wrongAnimal(std::string new_type);
		wrongAnimal(const wrongAnimal &ref);
		wrongAnimal &operator = (const wrongAnimal &ref);
		~wrongAnimal(void);
		void	makeSound(void) const;
		std::string	getType(void) const;

	protected :
		std::string	type;

};

#endif
