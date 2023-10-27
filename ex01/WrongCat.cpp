/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:46:59 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/17 13:57:18 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructor
WrongCat::WrongCat(void) {
	std::cout << "WrongCat constructor called" << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat& toCopy) : WrongAnimal(toCopy) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

// Destructor
WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

// Overload operator
WrongCat& WrongCat::operator=(const WrongCat &toCopy) {
	if (this == &toCopy)
		return (*this);
	this->_type = toCopy.getType();
	return (*this);
}

// Public method
void	WrongCat::makeSound(void) const {
	std::cout << "* Meow meow *"<< std::endl;
	return ;
}

// Getter
const std::string	&WrongCat::getType(void) const {
	return (this->_type);
}