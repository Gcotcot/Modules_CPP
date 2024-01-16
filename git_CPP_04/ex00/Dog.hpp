/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:32:33 by gcot              #+#    #+#             */
/*   Updated: 2023/10/22 13:32:35 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal {

	public :
		Dog(void);
		Dog(const Dog &ref);
		Dog &operator = (const Dog &ref);
		~Dog(void);
		void	makeSound(void) const;

};

#endif
