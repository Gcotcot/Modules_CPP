/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:24:07 by gcot              #+#    #+#             */
/*   Updated: 2023/10/22 13:32:23 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain constructor call\n";
}

Brain::Brain(const Brain &ref)
{
	std::cout << "Brain copy constructor call\n";
	*this = ref;
}

Brain	&Brain::operator = (const Brain &ref)
{
	(void)ref;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor call\n";
}
