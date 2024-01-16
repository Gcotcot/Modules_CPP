/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:20:39 by gcot              #+#    #+#             */
/*   Updated: 2023/10/22 13:30:57 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
# define Brain_HPP

# include <iostream>

class	Brain {

	public :
		Brain(void);
		Brain(const Brain &ref);
		Brain &operator = (const Brain &ref);
		virtual ~Brain(void);

	protected :
		std::string	ideas[100];
};

#endif
