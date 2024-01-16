/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:42:54 by gcot              #+#    #+#             */
/*   Updated: 2023/10/25 14:43:24 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MateriaSource_HPP
# define MateriaSource_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	private :
		AMateria	*slot[4];

	public :
		MateriaSource(void);
		MateriaSource(const MateriaSource &ref);
		MateriaSource &operator = (const MateriaSource &ref);
		~MateriaSource(void);
		void	learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const & type);
};

#endif
