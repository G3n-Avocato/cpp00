/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:23:18 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/19 18:20:32 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	{
	std::cout << "----- TEST 1 -----" << std::endl;
	std::cout << std::endl;
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	}
	{
	std::cout << std::endl;
	std::cout << "----- TEST 2 -----" << std::endl;
	std::cout << std::endl;
	IMateriaSource *src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character*	tod = new Character("tod");
	AMateria* tmp;

	tmp = src->createMateria("cure");
	tod->equip(tmp);
	tmp = src->createMateria("ice");
	tod->equip(tmp);
	tod->unequip(1);

	ICharacter *Rob	= new Character ("Rob");
	tod->use(1, *Rob);
	tod->use(0, *Rob);
	tod->unequip(0);
	tod->use(0, *Rob);
	tod->unequip(3);

	
	Character*	todette = new Character(*tod);

	todette->use(0, *tod);
	tmp = src->createMateria("ice");
	Rob->equip(tmp);
	tmp = src->createMateria("ice");
	Rob->equip(tmp);
	tmp = src->createMateria("ice");
	Rob->equip(tmp);
	tmp = src->createMateria("ice");
	Rob->equip(tmp);
	tmp = src->createMateria("ice");
	Rob->equip(tmp);

	Rob->use(3, *tod);

	delete tod ;
	delete todette ;
	delete Rob ;
	delete src ;
	}
	{
	std::cout << std::endl;
	std::cout << "----- TEST 3 -----" << std::endl;
	std::cout << std::endl;
	
	MateriaSource*	copy = new MateriaSource();

	// ----- Test constructeur de copy de Ice ----- //	
	Ice*	cpy = new Ice();
	Ice*	test1 = new Ice(*cpy);
	copy->learnMateria(test1);

	// ----- Test constructeur de copy de MateriaSource ----- //
	MateriaSource *src = new MateriaSource(*copy);

	// ----- Test constructeur de copy de Cure ----- //
	Cure*	cp = new Cure();
	Cure*	test2 = new Cure(*cp);
	src->learnMateria(test2);

	Character*	Rnc = new Character("Rnc");
	AMateria*	tmp;
	tmp = src->createMateria("ice");
	Rnc->equip(tmp);
	
	// ----- Test constructeur de copy, clone de AMateria ----- //
	AMateria*	tmp2 = tmp->clone();
	Rnc->equip(tmp2);
	
	// ----- Test constructeur de copy de Character ----- //
	Character*	Serg = new Character(*Rnc);
	
	tmp2 = src->createMateria("cure");
	Serg->equip(tmp2);

	Serg->use(0, *Rnc);
	Serg->use(1, *Rnc);
	Serg->use(2, *Rnc);

	// ---- Test operateur d'assignation leak ---- //
	Character*	ntm = new Character("NTM");
	*Serg = *ntm;
	Serg->use(0, *Rnc);

	delete ntm ;
	delete cpy ;
	delete copy ;
	delete src ;
	delete cp ;
	delete Serg ;
	delete Rnc ;
	std::cout << std::endl;
	}
	return 0;
}
