/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:18:40 by gcot              #+#    #+#             */
/*   Updated: 2023/09/17 15:16:02 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

std::string	ft_is_number_phone(void)
{
	std::string phone;

	std::cout << "Enter phone number\n";
	std::getline(std::cin, phone);
	for (long unsigned  i = 0; i < phone.length(); i++)
	{
		if ((phone[i] < '0' || phone[i] > '9') && phone[i] != ' ' && phone[i] != '.')
		{
			std::cout << "ERROR : Inalid syntaxt !!\n";
			return (ft_is_number_phone());
		}
	}
	return (phone);
}

std::string	ft_change_tab(std::string str)
{
	std::string	res = str;

	for (long unsigned  i = 0; i < res.length(); i++)
		if (res[i] < 32 && res[i] != 0)
			res[i] = 32;
	return (res);
}
