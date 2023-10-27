/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:46:56 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/17 11:05:15 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructor
Dog::Dog(void) {
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(const Dog &toCopy) : Animal(toCopy) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

// Destructor
Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
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

// Getter
const std::string	&Dog::getType(void) const {
	return (this->_type);
}