/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:46:47 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/18 13:41:03 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat(void) {
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain;
	return ;
}

Cat::Cat(const Cat &toCopy) : Animal(toCopy) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*toCopy.brain);
	return ;
}

// Destructor
Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
	return ;
}

// Overload operator
Cat& Cat::operator=(const Cat &toCopy) {
	if (this == &toCopy)
		return (*this);
	this->_type = toCopy.getType();
	return (*this);
}

// Public method
void	Cat::makeSound(void) const {
	std::cout << "* Meow meow *"<< std::endl;
	return ;
}

// Getters
const std::string	&Cat::getType(void) const {
	return (this->_type);
}

const std::string	&Cat::getBrainIdea(int index) const {
	return (brain->getIdea(index));
}

// Setter
void	Cat::setBrainIdea(int index, const std::string &newIdea) {
	brain->setIdea(index, newIdea);
	return ;
}