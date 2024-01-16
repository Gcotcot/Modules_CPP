/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:31:15 by gcot              #+#    #+#             */
/*   Updated: 2023/09/22 13:49:02 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::complain(std::string level)
{
	std::string     rule[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;
	int	x = 5;
        while (i < 4)
	{
                if (level == rule[i])
			x = i; 
		i++;
	}
	switch (x) {
		case 0:
			debug();
			break ;
		case 1:
			info();
			break ;
		case 2:
			warning();
			break ;
		case 3:
			error();
			break ;
		default :
			break ;
	}
}

void	Harl::debug(void)
{
	std::cout << "DEBUG :\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
	info();
}

void	Harl::info(void)
{
	std::cout << "INFO :\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
	warning();
}

void	Harl::warning(void)
{
	std::cout << "WARNING :\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n\n";
	error();
}

void	Harl::error(void)
{
	std::cout << "ERROR :\nThis is unacceptable! I want to speak to the manager now.\n";
}
