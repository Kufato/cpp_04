/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:46:47 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/17 11:05:52 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat(void) {
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(const Cat &toCopy) : Animal(toCopy) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

// Destructor
Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
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

// Getter
const std::string	&Cat::getType(void) const {
	return (this->_type);
}