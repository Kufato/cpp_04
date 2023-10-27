/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:46:56 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/18 13:40:52 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog(void) {
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain;
	return ;
}

Dog::Dog(const Dog &toCopy) : Animal(toCopy) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*toCopy.brain);
	return ;
}

// Destructor
Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
	return ;
}

// Overload operator
Dog& Dog::operator=(const Dog &toCopy) {
	if (this == &toCopy)
		return (*this);
	this->_type = toCopy.getType();
	return (*this);
}

// Public method
void	Dog::makeSound(void) const {
	std::cout << "* Wouaf wouaf *"<< std::endl;
	return ;
}

// Getters
const std::string	&Dog::getType(void) const {
	return (this->_type);
}

const std::string	&Dog::getBrainIdea(int index) const {
	return (brain->getIdea(index));
}

// Setter
void	Dog::setBrainIdea(int index, const std::string &newIdea) {
	brain->setIdea(index, newIdea);
	return ;
}
