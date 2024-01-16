/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:06:35 by gcot              #+#    #+#             */
/*   Updated: 2023/09/11 13:14:46 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int	i = 0;
		while (argv[++i])
		{
			int	x = 0;
			while (argv[i][x])
				putwchar(toupper(argv[i][x++]));
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	return (0);
}
