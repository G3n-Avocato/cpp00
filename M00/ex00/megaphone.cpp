/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:34:53 by lamasson          #+#    #+#             */
/*   Updated: 2023/07/23 21:49:58 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv) 
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc > 1)
	{
		while (i != argc)
		{
			while (argv[i][j])
			{
				argv[i][j] = std::toupper(argv[i][j]);
				j++;
			}
			std::cout << argv[i];
			j = 0;
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
