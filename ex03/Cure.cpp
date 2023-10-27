/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:08:04 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/19 15:52:53 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

// Constructors
Cure::Cure(void) : AMateria() {
	std::cout << "Cure default constructor called" << std::endl;
	this->_type = "cure";
	return ;
}

Cure::Cure(const Cure &toCopy) : AMateria(toCopy){
	std::cout << "Cure copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

// Destructor
Cure::~Cure(void) {
	std::cout << "Cure destructor called" << std::endl;
	return ;
}

// Overload operator
Cure	&Cure::operator=(const Cure &toCopy) {
	if (this == &toCopy)
		return (*this);
	this->_type = toCopy._type;
	return (*this);
}

// Public method
AMateria	*Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target) {
	std::cout << _GREEN << "* heals " << target.getName() << "’s wounds *" << _END << std::endl;
	return ;
}