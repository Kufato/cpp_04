/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:46:33 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/23 17:04:29 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Constructors
Animal::Animal(void) {
	std::cout << "Animal constructor called" << std::endl;
	this->_type = "default";
	return ;
}

Animal::Animal(const Animal &toCopy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

// Destructor
Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

// Overload operator
Animal& Animal::operator=(const Animal &toCopy) {
	if (this == &toCopy)
		return (*this);
	this->_type = toCopy.getType();
	return (*this);
}

// Getter
const std::string	&Animal::getType(void) const {
	return (this->_type);
}