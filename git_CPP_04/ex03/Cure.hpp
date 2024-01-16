/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:33:46 by gcot              #+#    #+#             */
/*   Updated: 2023/10/25 13:33:48 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP

# include "AMateria.hpp"

class Cure : public AMateria{

	public:
		Cure(void);
		Cure(std::string const &new_type);
		Cure(const Cure &ref);
		Cure &operator = (const Cure &ref);
		~Cure(void);
		Cure	*clone() const;
		virtual void		use(ICharacter& target);
};

#endif
