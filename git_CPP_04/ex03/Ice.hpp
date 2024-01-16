/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:33:46 by gcot              #+#    #+#             */
/*   Updated: 2023/10/25 13:33:48 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
# define Ice_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

	public:
		Ice(void);
		Ice(std::string const &new_type);
		Ice(const Ice &ref);
		Ice &operator = (const Ice &ref);
		~Ice(void);
		Ice	*clone() const;
		virtual void		use(ICharacter& target);
};

#endif
