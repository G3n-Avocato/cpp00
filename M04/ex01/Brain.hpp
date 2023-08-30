/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 00:32:35 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/31 00:36:18 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain {
	public :
		Brain(void);
		Brain(const Brain &src) ;
		Brain &operator=(const Brain &rhs) ;
		~Brain(void);

		void	setIdeas(std::string id) ;
		std::string *getIdeas(void) const ;

	private:
		std::string	_ideas[100];
};

#endif
