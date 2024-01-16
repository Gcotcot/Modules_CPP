/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:32:33 by gcot              #+#    #+#             */
/*   Updated: 2023/10/22 13:32:35 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef wrongCat_HPP
# define wrongCat_HPP

# include "wrongAnimal.hpp"

class	wrongCat : public wrongAnimal {

	public :
		wrongCat(void);
		wrongCat(const wrongCat &ref);
		wrongCat &operator = (const wrongCat &ref);
		~wrongCat(void);
		void	makeSound(void) const;

};

#endif
