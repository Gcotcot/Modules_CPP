/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:40:46 by gcot              #+#    #+#             */
/*   Updated: 2023/10/23 12:46:34 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_HPP
# define AMateria_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

	protected:
		std::string	type;

	public:
		AMateria(void);
		AMateria(std::string const &new_type);
		AMateria(const AMateria &ref);
		AMateria &operator = (const AMateria &ref);
		virtual ~AMateria(void);
		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif
