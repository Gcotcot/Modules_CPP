/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:32:33 by gcot              #+#    #+#             */
/*   Updated: 2023/10/22 13:32:35 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal {

	public :
		Cat(void);
		Cat(const Cat &ref);
		Cat &operator = (const Cat &ref);
		~Cat(void);
		void	makeSound(void) const;

};

#endif
