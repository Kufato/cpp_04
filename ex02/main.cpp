/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:47:11 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/24 14:02:30 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void) {
	{
		std::cout << _GREEN << "\n### DEEP COPIES TESTS FOR DOG ###\n" << _END << std::endl;
		Dog	bontoutou;
		std::cout << "\nCréation de bontoutou" << std::endl;
		
		bontoutou.setBrainIdea(42, "Les cramptés de Zied (en fait ils étaient là)");
		std::cout << "Modification de l'idée numéro " << _YELLOW <<  "42\n" << _END << std::endl;

		Dog	copyBontoutou = bontoutou;
		std::cout << "\nCréation d'une copie de bontoutou" << std::endl;
		
		bontoutou.setBrainIdea(0, "Mouloud Achour qui effectue Ice Bucket Challenge (so crazy) !");
		std::cout << "Modification de l'idée numéro " << _YELLOW << "0" << _END << " de bontoutou" << std::endl;
		
		std::cout << "\nL'idée numéro 42 de bontoutou : " << _CYAN << bontoutou.getBrainIdea(42) << _END << std::endl;
		std::cout << "L'idée numéro 42 de copyBontoutou : " << _CYAN << copyBontoutou.getBrainIdea(42) << _END << std::endl;
		std::cout << "\nL'idée numéro 0 de bontoutou : " << _CYAN << bontoutou.getBrainIdea(0) << _END << std::endl;
		std::cout << "L'idée numéro 0 de copyBontoutou : " << _CYAN << copyBontoutou.getBrainIdea(0) << _END << std::endl;
	}
	{
		std::cout << _GREEN << "\n### DEEP COPIES TESTS FOR CAT ###\n" << _END << std::endl;
		Cat leminou;
		std::cout << "\nCréation de leminou" << std::endl;
		
		leminou.setBrainIdea(69, "DJ Khaled actuellement sur de lui que 1 + 1 = 3");
		std::cout << "Modification de l'idée numéro " << _YELLOW <<  "69\n" << _END << std::endl;

		Cat	copyLeminou = leminou;
		std::cout << "\nCréation d'une copie de leminou" << std::endl;
		
		leminou.setBrainIdea(19, "Un clavier RGB en noir et blanc");
		std::cout << "Modification de l'idée numéro " << _YELLOW << "19" << _END << " de leminou" << std::endl;
		
		std::cout << "\nL'idée numéro 69 de leminou : " << _CYAN << leminou.getBrainIdea(69) << _END << std::endl;
		std::cout << "L'idée numéro 69 de copyLeminou : " << _CYAN << copyLeminou.getBrainIdea(69) << _END << std::endl;
		std::cout << "\nL'idée numéro 19 de leminou : " << _CYAN << leminou.getBrainIdea(19) << _END << std::endl;
		std::cout << "L'idée numéro 19 de copyLeminou : " << _CYAN << copyLeminou.getBrainIdea(19) << _END << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << _GREEN << "\n### ARRAY OF ANIMAL TESTS ###\n" << _END << std::endl;
		Animal	*Animals[10];
		for (int i = 0; i < 10; ++i) {
			if (i % 2 == 0)
				Animals[i] = new Dog();
			else
				Animals[i] = new Cat();
		}
		for (int i = 0; i < 10; ++i) {
			delete Animals[i];
		}
	}
	{
		// std::cout << _GREEN << "\n### ABSTRACT TESTS ###\n" << _END << std::endl;
		// Animal Dolly;
	}
	return (0);
}