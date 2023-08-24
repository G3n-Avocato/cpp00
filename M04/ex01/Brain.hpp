/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:04:25 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/24 13:58:49 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain {
	public:
		Brain(void);
		Brain(Brain const &src);
		Brain& operator=(Brain const &rhs);
		~Brain(void);

	protected:
		std::string	ideas[100];
};

#endif
