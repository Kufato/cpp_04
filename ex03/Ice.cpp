/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:07:52 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/19 11:36:23 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

// Constructors
Ice::Ice(void) : AMateria() {
	std::cout << "Ice default constructor called" << std::endl;
	this->_type = "ice";
	return ;
}

Ice::Ice(const Ice& toCopy) : AMateria(toCopy) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

// Destructor
Ice::~Ice(void) {
	std::cout << "Ice destructor called" << std::endl;
	return ;
}

// Overload operator
Ice	&Ice::operator=(const Ice &toCopy) {
	if (this == &toCopy)
		return (*this);
	this->_type = toCopy._type;
	return (*this);
}

// Public method
AMateria	*Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target) {
	std::cout << _CYAN << "* shoots an ice bolt at " << target.getName() << "*" << _END << std::endl;
	return ;
}