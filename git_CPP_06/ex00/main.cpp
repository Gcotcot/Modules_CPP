/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:40:16 by gcot              #+#    #+#             */
/*   Updated: 2023/10/22 13:41:24 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "NB args invalid\n";
		return 1;
	}
	std::string str(argv[1]);
	if (str.length() == 0)
		return (1);
	ScalarConvert::convert(str);
	//conv.convert(str);
	return (0);
}
