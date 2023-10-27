/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:01:19 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/20 11:00:47 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

// Constructors
AMateria::AMateria(void) {
	std::cout << "AMateria default constructor called" << std::endl;
	this->_type = "default";
	this->_isEquip = false;
	return ;
}

AMateria::AMateria(const std::string &type) {
	std::cout << "AMateria set type constructor called" << std::endl;
	this->_type = type;
	this->_isEquip = false;
	return ;
}

AMateria::AMateria(const AMateria &toCopy) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

// Destructor
AMateria::~AMateria(void) {
	std::cout << "AMateria destructor called" << std::endl;
	return ;
}

// Overload operator
AMateria& AMateria::operator=(const AMateria &toCopy) {
	if (this == &toCopy)
		return (*this);
	this->_type = toCopy.getType();
	this->_isEquip = toCopy._isEquip;
	return (*this);
}

// Public method
void	AMateria::use(ICharacter &target) {
	std::cout << _CYAN << "* beware this attack will do nothing to " << target.getName() << "*" << _END << std::endl;
	return ;
}

// Getter
const std::string	AMateria::getType(void) const {
	return (this->_type);
}

bool	AMateria::getIsEquip(void) const {
	return (this->_isEquip);
}

// Setter
void	AMateria::setIsEquip(void) {
	this->_isEquip = !this->_isEquip;
	return ;
}