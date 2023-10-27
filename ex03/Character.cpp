/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:16:05 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/23 15:18:39 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <cstring>

// Constructors
Character::Character(const std::string name) {
	std::cout << "Character set name constructor called" << std::endl;
	memset(this->_materias, 0, sizeof(this->_materias));
	this->_name = name;
	return ;
}

Character::Character(const Character &toCopy) {
	std::cout << "Character copy constructor called" << std::endl;
	this->_name = toCopy.getName();
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != NULL) {
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
		if (toCopy._materias[i] != NULL)
			this->_materias[i] = toCopy._materias[i]->clone();
	}
	return ;
}

// Destructor
Character::~Character(void) {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}
	return ;
}

// Overload operator
Character	&Character::operator=(const Character &toCopy) {
	if (this == &toCopy)
		return (*this);
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != NULL) {
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
		if (toCopy._materias[i] != NULL)
			this->_materias[i] = toCopy._materias[i]->clone();
	}
	return (*this);
}

// Public methods
void	Character::equip(AMateria *materia) {
	if (!materia) {
		std::cout << _RED << "This materia is not valid" << _END << std::endl;
		return ;
	}
	if (materia->getIsEquip() == true) {
		std::cout << _RED << "This materia is already equipped" << _END << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] == NULL) {
			this->_materias[i] = materia;
			materia->setIsEquip();
			return ;
		}
	}
	std::cout << _RED << "You already have the maximum number of materia possible" << _END << std::endl;
	delete materia;
	return ;
}

void	Character::unequip(int idx) {
	if ((idx < 0 || idx > 3 ) || (!this->_materias[idx])) {
		std::cout << _RED << "* There is no materia at this index *" << _END << std::endl;
		return ;
	}
	this->_materias[idx]->setIsEquip();
	this->_materias[idx] = NULL;
	return ;
}

void	Character::use(int idx, ICharacter &target) {
	if ((idx < 0 || idx > 3) || (this->_materias[idx] == NULL)) {
		std::cout << _RED << "* There is no materia at this index *" << _END << std::endl;
		return ;
	}
	this->_materias[idx]->use(target);
	return ;
}

void	Character::deleteMateria(int i) {
	if ((i < 0 || i > 3) || (this->_materias[i] == NULL)) {
		std::cout << _RED << "* There is no materia at this index *" << _END << std::endl;
		return ;
	}
	delete this->_materias[i];
	return ;
}

// Getter
std::string const	&Character::getName() const {
	return (this->_name);
}

const AMateria	*Character::getMateria(int index) const {
	return (this->_materias[index]);
}