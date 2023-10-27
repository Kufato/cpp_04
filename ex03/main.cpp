/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:00:07 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/24 14:04:42 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

int	main(void) {
	{
		std::cout << _BLUE << "\n### SUBJECT TESTS ###\n" << _END << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		std::cout << std::endl;
		me->use(0, *bob);
		me->use(1, *bob);
		std::cout << std::endl;
		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << _BLUE << "\n### DEEP COPY TESTS FOR CHARACTERS ###\n" << _END << std::endl;
		AMateria		*tmp;
		Character		*Pepito = new Character("Pepito");
		Character		*Gontrant = new Character("Gontrant");
		ICharacter		*LeNul = new Character("LeNul");
		IMateriaSource	*src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		tmp = src->createMateria("ice");
		Pepito->equip(tmp);
		tmp = src->createMateria("cure");
		Pepito->equip(tmp);

		delete Gontrant;
		Gontrant = Pepito;

		std::cout << std::endl;
		Gontrant->use(0, *LeNul);
		Gontrant->use(1, *LeNul);
		std::cout << std::endl;

		delete LeNul;
		delete Pepito;
		delete src;
	}
	{
		std::cout << _BLUE << "\n### TESTS FOR MATERIAS ###\n" << _END << std::endl;
		AMateria		*tmp;
		AMateria		*tmp2;
		AMateria		*ice = new Ice();
		AMateria		*cure = new Cure();
		ICharacter		*cloud = new Character("cloud");
		ICharacter		*barrett = new Character("barrett");
		IMateriaSource	*src = new MateriaSource();
		const AMateria	*trash;

		src->learnMateria(ice);
		src->learnMateria(cure);


		tmp = src->createMateria("ice");
		barrett->equip(tmp);
		tmp2 = src->createMateria("cure");
		barrett->equip(tmp2);

		barrett->use(0, *cloud);
		barrett->use(1, *cloud);

		trash = dynamic_cast<Character*>(barrett)->getMateria(0);
		barrett->unequip(0);
		delete trash;
		trash = dynamic_cast<Character*>(barrett)->getMateria(1);
		barrett->unequip(1);
		delete trash;
		trash = dynamic_cast<Character*>(barrett)->getMateria(2);
		barrett->unequip(2);
		delete trash;
		trash = dynamic_cast<Character*>(barrett)->getMateria(3);
		barrett->unequip(3);
		delete trash;
		
		AMateria* test = src->createMateria("ice");
		AMateria* test1 = src->createMateria("ice");
		AMateria* test2 = src->createMateria("ice");
		AMateria* test3 = src->createMateria("ice");
		AMateria* test4 = src->createMateria("ice");

		ICharacter* Jimmy = new Character("JimmyJ");
		Jimmy->equip(test);
		Jimmy->equip(test1);
		Jimmy->equip(test2);
		Jimmy->equip(test3);
		Jimmy->unequip(0);
		Jimmy->equip(test4);
		delete test;
		delete Jimmy;

		barrett->use(0, *cloud);
		barrett->use(1, *cloud);

		delete (src);
		delete (barrett);
		delete (cloud);
	}
	return 0;
}