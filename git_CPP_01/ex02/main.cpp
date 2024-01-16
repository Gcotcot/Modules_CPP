/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:01:41 by gcot              #+#    #+#             */
/*   Updated: 2023/09/18 15:11:47 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;
	
	std::cout << &str << "\n";
	std::cout << &ptr << "\n";
	std::cout << &ref << "\n\n";
	std::cout << str << "\n";
	std::cout << ptr << "\n";
	std::cout << ref << "\n";
}
