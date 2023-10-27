/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:47:11 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/17 15:02:11 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void) {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound(); //will output the default sound!
	
	std::cout << std::endl;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << std::endl;
	std::cout << wrong_animal->getType() << " " << std::endl;
	std::cout << wrong_cat->getType() << " " << std::endl;
	std::cout << std::endl;
	wrong_cat->makeSound(); //will output the default sound!
	wrong_animal->makeSound(); //will output the default sound!
	std::cout << std::endl;
	
	delete meta;
	delete j;
	delete i;
	delete wrong_animal;
	delete wrong_cat;
	
	return (0);
}