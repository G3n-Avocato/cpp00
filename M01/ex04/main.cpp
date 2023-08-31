/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 23:26:31 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/31 20:19:01 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char **argv) {

	if (argc != 4 || argv[2][0] == '\0')
	{
		std::cout << "Wrong arguments ..." << std::endl;
		return (1);
	}
	Sed		sed(argv[1], argv[2], argv[3]);
	if (!sed.isOpen())
	{
		std::cout << "Wrong infile ..." << std::endl;
		return (1);
	}
	sed.recoverFile();
	sed.replace2();
	if (!sed.newFile())
	{
		std::cout << "can't create outfile ..." << std::endl;
		return (1);
	}
	return (0);
}
