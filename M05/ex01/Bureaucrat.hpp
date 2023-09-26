/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:29:53 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/26 23:23:14 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Form;

class	Bureaucrat {

	public:
        Bureaucrat(void);
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const &src);
        Bureaucrat& operator=(Bureaucrat const &rhs);
        ~Bureaucrat(void);

		std::string	const getName(void) const;
		int	getGrade(void) const;

		void	upGrade();
		void	downGrade();
		void	signForm(Form const &src) const;

	private:
		std::string const	_name;
		int					_grade;

        void    exception(void);
        void    GradeTooHighException(void);
        void    GradeTooLowException(void);
};

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
