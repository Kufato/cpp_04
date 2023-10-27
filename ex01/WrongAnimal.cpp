/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:46:50 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/17 13:56:55 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructor
WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->_type = "WrongAnimal";
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& toCopy) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

// Destructor
WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

// Overload operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &toCopy) {
	if (this == &toCopy)
		return (*this);

	return (*this);
}

// Public method
void	WrongAnimal::makeSound(void) const {
	std::cout << "* A default sound *"<< std::endl;
	return ;
}

// Getter
const std::string	&WrongAnimal::getType(void) const {
	return (this->_type);
}