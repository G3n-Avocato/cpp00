/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 23:41:48 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/31 20:19:06 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(char *file, char *s1, char *s2) : _s1(s1), _s2(s2){
	this->_file.open(file);
	this->_name = file;
	this->_name += ".replace";
}

Sed::~Sed(void) {
	this->_file.close();
}

bool	Sed::isOpen(void) const {
	if (this->_file)
		return (true);
	return (false);
}

void	Sed::recoverFile(void) {
	std::stringstream	buf;

	buf << this->_file.rdbuf();
	this->_s_file = buf.str();
}

void	Sed::replace2(void) {
	int	i = 0;

	while (this->_s_file.find(this->_s1, i) != std::string::npos)
	{
		i = this->_s_file.find(this->_s1, i);
		this->_s_file.erase(i, this->_s1.length());
		this->_s_file.insert(i, this->_s2);
		i += this->_s2.length();
	}
}

bool	Sed::newFile(void) {
	std::ofstream	out(this->_name);
	
	if (!out)
		return (false);
	out << this->_s_file;
	out.close();
	return (true);
}
